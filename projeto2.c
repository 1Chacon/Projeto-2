#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "projeto2.h"

void jogar() {
    printf("--------------------------------------------------------- \n");
    FILE *arquivo_perguntas;
    Pergunta perguntas[MAX_PERGUNTAS];
    int i, qtd_perguntas = 0;
    char nome_jogador[MAX_NOME];
    int pontuacao = 0;
    int pergunta_atual = 0;
    Pergunta perguntas_selecionadas[MAX_PERGUNTAS];
    Pergunta perguntas_arrays[5][20];

    // Abrir arquivo de perguntas
    arquivo_perguntas = fopen("perguntas_jogo.bin", "rb");
    if (arquivo_perguntas == NULL) {
        printf("Erro ao abrir o arquivo perguntas_jogo.bin.\n");
        return;
    }

    // Ler perguntas do arquivo
    while (fread(&perguntas[qtd_perguntas], sizeof(Pergunta), 1, arquivo_perguntas) == 1) {
        qtd_perguntas++;
    }

    fclose(arquivo_perguntas);

    // Dividir perguntas em 5 arrays de 20 perguntas cada
    for (i = 0; i < qtd_perguntas; i++) {
        int indice_array = i / 20;
        int indice_pergunta = i % 20;
        perguntas_arrays[indice_array][indice_pergunta] = perguntas[i];
    }

    // Selecionar um dos arrays para exibir ao usuário
    srand(time(NULL));
    int indice_array_selecionado = rand() % 5;
    for (i = 0; i < 20; i++) {
        perguntas_selecionadas[i] = perguntas_arrays[indice_array_selecionado][i];
    }

    // Solicitar nome do jogador
    printf("Digite seu nome (sem espacos): ");
    scanf("%s", nome_jogador);

    // Jogar
    while (pergunta_atual < 20) {
        printf("\nPergunta %d:\n", pergunta_atual + 1);
        printf("%s\n", perguntas_selecionadas[pergunta_atual].pergunta);
        for (int j = 0; j < MAX_RESPOSTAS; j++) {
            printf("%d. %s\n", j + 1, perguntas_selecionadas[pergunta_atual].alternativas[j]);
        }
        printf("Digite a alternativa correta: ");
        int resposta;
        scanf("%d", &resposta);

        if (resposta == perguntas_selecionadas[pergunta_atual].resposta) {
            printf("Resposta correta!\n");
            pontuacao++;
        } else {
            printf("Resposta incorreta. A resposta correta e %d. %s\n", perguntas_selecionadas[pergunta_atual].resposta, perguntas_selecionadas[pergunta_atual].alternativas[perguntas_selecionadas[pergunta_atual].resposta - 1]);
            break;
        }

        pergunta_atual++;
    }

    // Salvar pontuação do jogador
    FILE *arquivo_placar;
    arquivo_placar = fopen("placar_jogadores.txt", "a");
    if (arquivo_placar == NULL) {
        printf("Erro ao abrir o arquivo placar_jogadores.txt.\n");
        return;
    }

    fprintf(arquivo_placar, "%s %d\n", nome_jogador, pontuacao);
    fclose(arquivo_placar);

    printf("Pontuacao final: %d\n", pontuacao);
}

void exibir_tutorial() {
    printf("--------------------------------------------------------- \n");
    FILE *arquivo_tutorial;
    char linha[1024];

    arquivo_tutorial = fopen("tutorial.txt", "r");
    if (arquivo_tutorial == NULL) {
        printf("Erro ao abrir o arquivo tutorial.txt.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), arquivo_tutorial)) {
        printf("%s", linha);
    }

    fclose(arquivo_tutorial);
}



void exibir_placar() {
    printf("--------------------------------------------------------- \n");
    FILE *arquivo_placar;
    Jogador jogadores[MAX_JOGADORES];
    int i, qtd_jogadores = 0;

    arquivo_placar = fopen("placar_jogadores.txt", "r");
    if (arquivo_placar == NULL) {
        printf("Erro ao abrir o arquivo placar_jogadores.txt.\n");
        return;
    }

    while (fscanf(arquivo_placar, "%s %d", jogadores[qtd_jogadores].nome, &jogadores[qtd_jogadores].pontuacao) == 2) {
        qtd_jogadores++;
    }

    fclose(arquivo_placar);

    // Ordenar jogadores por pontuação
    for (i = 0; i < qtd_jogadores - 1; i++) {
        for (int j = i + 1; j < qtd_jogadores; j++) {
            if (jogadores[i].pontuacao < jogadores[j].pontuacao) {
                Jogador temp = jogadores[i];
                jogadores[i] = jogadores[j];
                jogadores[j] = temp;
            }
        }
    }

    // Exibir placar
    printf("Placar:\n");
    int limite = (qtd_jogadores < 10) ? qtd_jogadores : 10;
    for (i = 0; i < limite; i++) {
        printf("%s - %d/%d\n", jogadores[i].nome, jogadores[i].pontuacao, MAX_PONTUACAO);
    }
}



void add_pergunta() {
    printf("--------------------------------------------------------- \n");
    FILE *arquivo_perguntas;
    Pergunta nova_pergunta;

    // Abrir o arquivo de perguntas em modo de adição binária
    arquivo_perguntas = fopen("perguntas_jogo.bin", "ab");
    if (arquivo_perguntas == NULL) {
        printf("Erro ao abrir o arquivo perguntas_jogo.bin.\n");
        return;
    }

    // Solicitar a nova pergunta
    printf("Digite a nova pergunta: ");
    getchar(); // Limpar o buffer do stdin
    fgets(nova_pergunta.pergunta, sizeof(nova_pergunta.pergunta), stdin);
    nova_pergunta.pergunta[strcspn(nova_pergunta.pergunta, "\n")] = 0; // Remover o caractere de nova linha

    // Solicitar as alternativas
    for (int i = 0; i < MAX_RESPOSTAS; i++) {
        printf("Digite a alternativa %d: ", i + 1);
        fgets(nova_pergunta.alternativas[i], sizeof(nova_pergunta.alternativas[i]), stdin);
        nova_pergunta.alternativas[i][strcspn(nova_pergunta.alternativas[i], "\n")] = 0; // Remover o caractere de nova linha
    }

    // Solicitar a resposta correta
    printf("Digite o numero da resposta correta (1-%d): ", MAX_RESPOSTAS);
    scanf("%d", &nova_pergunta.resposta);
    
    // Validar a resposta
    if (nova_pergunta.resposta < 1 || nova_pergunta.resposta > MAX_RESPOSTAS) {
        printf("Resposta invalida. A resposta deve ser um numero entre 1 e %d.\n", MAX_RESPOSTAS);
        fclose(arquivo_perguntas);
        return;
    }

    // Escrever a nova pergunta no arquivo
    fwrite(&nova_pergunta, sizeof(Pergunta), 1, arquivo_perguntas);
    fclose(arquivo_perguntas);

    printf("Pergunta adicionada com sucesso!\n");
}



