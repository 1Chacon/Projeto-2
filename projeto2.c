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




void remov_pergunta() {
    printf("--------------------------------------------------------- \n");
    FILE *arquivo_perguntas, *arquivo_temp;
    Pergunta perguntas[MAX_PERGUNTAS];
    int i, qtd_perguntas = 0;

    // Abrir o arquivo de perguntas em modo de leitura binária
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

    // Exibir perguntas
    printf("Perguntas:\n");
    for (i = 0; i < qtd_perguntas; i++) {
        printf("%d. %s\n", i + 1, perguntas[i].pergunta);
    }

    // Solicitar a pergunta a ser removida
    int pergunta_selecionada;
    printf("Digite o numero da pergunta que voce deseja remover: ");
    scanf("%d", &pergunta_selecionada);

    // Verificar se a pergunta existe
    if (pergunta_selecionada < 1 || pergunta_selecionada > qtd_perguntas) {
        printf("Pergunta nao encontrada.\n");
        return;
    }

    // Exibir a pergunta selecionada
    printf("Pergunta selecionada: %s\n", perguntas[pergunta_selecionada - 1].pergunta);

    // Confirmar a remoção
    int confirmacao;
    printf("Voce deseja remover esta pergunta? (1 - Sim, 2 - Nao): ");
    scanf("%d", &confirmacao);

    if (confirmacao == 1) {
        // Criar um arquivo temporário
        arquivo_temp = fopen("temp.bin", "wb");
        if (arquivo_temp == NULL) {
            printf("Erro ao criar arquivo temporário.\n");
            return;
        }

        // Escrever todas as perguntas, exceto a selecionada
        for (i = 0; i < qtd_perguntas; i++) {
            if (i != pergunta_selecionada - 1) {
                fwrite(&perguntas[i], sizeof(Pergunta), 1, arquivo_temp);
            }
        }

        fclose(arquivo_temp);
    }
}



void add_jogador() {
    printf("--------------------------------------------------------- \n");
    FILE *arquivo_placar;
    char nome[50];
    int pontuacao;

    // Solicitar o nome do jogador
    printf("Digite o nome do jogador: ");
    scanf("%s", nome);

    // Solicitar a pontuação do jogador
    printf("Digite a pontuacao do jogador (entre 0 e 20): ");
    scanf("%d", &pontuacao);

    // Verificar se a pontuação está dentro do intervalo válido
    while (pontuacao < 0 || pontuacao > 20) {
        printf("Pontuacao invalida. Por favor, digite uma pontuacao entre 0 e 20: ");
        scanf("%d", &pontuacao);
    }

    // Confirmar os dados
    printf("Voce deseja adicionar o jogador %s com pontuacao %d? (1 - Sim, 2 - Nao): ", nome, pontuacao);
    int confirmacao;
    scanf("%d", &confirmacao);

    if (confirmacao == 1) {
        // Abrir o arquivo em modo de adição
        arquivo_placar = fopen("placar_jogadores.txt", "a");
        if (arquivo_placar == NULL) {
            printf("Erro ao abrir o arquivo placar_jogadores.txt.\n");
            return;
        }

        // Escrever o nome e a pontuação no arquivo
        fprintf(arquivo_placar, "%s %d\n", nome, pontuacao);
        fclose(arquivo_placar);

        printf("Jogador adicionado com sucesso!\n");
    } else {
        printf("Adicao cancelada.\n");
    }
}
       


void remov_jogador() {
    printf("--------------------------------------------------------- \n");
    FILE *arquivo_placar, *arquivo_temp;
    char nome[50];
    char linha[100];
    int encontrado = 0;

    // Abrir o arquivo de placar em modo de leitura
    //madebyRodrigoCastanho
    arquivo_placar = fopen("placar_jogadores.txt", "r");
    if (arquivo_placar == NULL) {
        printf("Erro ao abrir o arquivo placar_jogadores.txt.\n");
        return;
    }

    // Exibir todos os jogadores e suas pontuações
    printf("Jogadores e suas pontuacoes:\n");
    while (fgets(linha, sizeof(linha), arquivo_placar) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo_placar);

    // Solicitar o nome do jogador a ser removido
    printf("Digite o nome do jogador que voce deseja remover: ");
    scanf("%s", nome);

    // Confirmar a remoção
    printf("Voce deseja remover o jogador %s? (1 - Sim, 2 - Nao): ", nome);
    int confirmacao;
    scanf("%d", &confirmacao);

    if (confirmacao == 1) {
        // Abrir o arquivo de placar em modo de leitura novamente
        arquivo_placar = fopen("placar_jogadores.txt", "r");
        arquivo_temp = fopen("temp.txt", "w");
        if (arquivo_placar == NULL || arquivo_temp == NULL) {
            printf("Erro ao abrir os arquivos.\n");
            return;
        }

        // Copiar todos os jogadores, exceto o que será removido
        while (fgets(linha, sizeof(linha), arquivo_placar) != NULL) {
            if (strstr(linha, nome) == NULL) {
                fputs(linha, arquivo_temp); // Escrever no arquivo temporário
            } else {
                encontrado = 1; // Jogador encontrado para remoção
            }
        }

        fclose(arquivo_placar);
        fclose(arquivo_temp);

        // Substituir o arquivo original pelo temporário
        remove("placar_jogadores.txt");
        rename("temp.txt", "placar_jogadores.txt");

        if (encontrado) {
            printf("Jogador %s removido com sucesso!\n", nome);
        } else {
            printf("Jogador %s nao encontrado.\n", nome);
        }
    } else {
        printf("Remocao cancelada.\n");
    }
}
