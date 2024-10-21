#include <stdio.h>
#include <string.h>

#define MAX_PERGUNTAS 100
#define MAX_RESPOSTAS 4

typedef struct {
    char pergunta[200];
    char alternativas[MAX_RESPOSTAS][50];
    int resposta;
} Pergunta;

int main() {
    Pergunta perguntas[MAX_PERGUNTAS];
    FILE *arquivo_perguntas;
    int i = 0;

    // Abrir o arquivo de perguntas em modo binário
    arquivo_perguntas = fopen("perguntas_jogo.bin", "wb");
    if (arquivo_perguntas == NULL) {
        printf("Erro ao abrir o arquivo perguntas_jogo.bin.\n");
        return 1;
    };

    while(i < MAX_PERGUNTAS){

        // Pergunta 1
        if (i == 0) {
            strcpy(perguntas[i].pergunta, "Qual e a capital do Brasil?");
            strcpy(perguntas[i].alternativas[0], "Rio de Janeiro");
            strcpy(perguntas[i].alternativas[1], "Sao Paulo");
            strcpy(perguntas[i].alternativas[2], "Brasilia");
            strcpy(perguntas[i].alternativas[3], "Belo Horizonte");
            perguntas[i].resposta = 3;
        }
        // Pergunta 2
        else if (i == 1) {
            strcpy(perguntas[i].pergunta, "Quem e o autor do livro 'Dom Quixote'?");
            strcpy(perguntas[i].alternativas[0], "Miguel de Cervantes");
            strcpy(perguntas[i].alternativas[1], "William Shakespeare");
            strcpy(perguntas[i].alternativas[2], "J.K. Rowling");
            strcpy(perguntas[i].alternativas[3], "F. Scott Fitzgerald");
            perguntas[i].resposta = 1;
        }
        // Pergunta 3
        else if (i == 2) {
            strcpy(perguntas[i].pergunta, "Qual e o maior planeta do sistema solar?");
            strcpy(perguntas[i].alternativas[0], "Jupiter");
            strcpy(perguntas[i].alternativas[1], "Saturno");
            strcpy(perguntas[i].alternativas[2], "Urano");
            strcpy(perguntas[i].alternativas[3], "Netuno");
            perguntas[i].resposta = 1;
        }
        // Pergunta 4
        else if (i == 3) {
            strcpy(perguntas[i].pergunta, "Quem e o criador da teoria da evolucao?");
            strcpy(perguntas[i].alternativas[0], "Charles Darwin");
            strcpy(perguntas[i].alternativas[1], "Galileu Galilei");
            strcpy(perguntas[i].alternativas[2], "Isaac Newton");
            strcpy(perguntas[i].alternativas[3], "Albert Einstein");
            perguntas[i].resposta = 1;
        }
        // Pergunta 5
        else if (i == 4) {
            strcpy(perguntas[i].pergunta, "Qual e o nome do maior rio do mundo?");
            strcpy(perguntas[i].alternativas[0], "Amazonas");
            strcpy(perguntas[i].alternativas[1], "Nilo");
            strcpy(perguntas[i].alternativas[2], "Yangtze");
            strcpy(perguntas[i].alternativas[3], "Mississippi");
            perguntas[i].resposta = 1;
        }
        // Pergunta 6
          else if (i == 5) {
            strcpy(perguntas[i].pergunta, "Qual é o elemento químico representado pela letra O ?");
            strcpy(perguntas[i].alternativas[0], "Ouro");
            strcpy(perguntas[i].alternativas[1], "Oxigênio");
            strcpy(perguntas[i].alternativas[2], "Ósmio");
            strcpy(perguntas[i].alternativas[3], "Oxalato");
            perguntas[i].resposta = 2;
        }
              
         // Pergunta 7
          else if (i == 6) {
            strcpy(perguntas[i].pergunta, "Quantos continentes existem no mundo?");
            strcpy(perguntas[i].alternativas[0], "5");
            strcpy(perguntas[i].alternativas[1], "6");
            strcpy(perguntas[i].alternativas[2], "7");
            strcpy(perguntas[i].alternativas[3], "8");
            perguntas[i].resposta = 3;
        }
                      
         // Pergunta 8
          else if (i == 7) {
            strcpy(perguntas[i].pergunta, "Em que ano começou a Segunda Guerra Mundial?");
            strcpy(perguntas[i].alternativas[0], "1914");
            strcpy(perguntas[i].alternativas[1], "1939");
            strcpy(perguntas[i].alternativas[2], "1941");
            strcpy(perguntas[i].alternativas[3], "1929");
            perguntas[i].resposta = 2;
        }
        
        
         // Pergunta 9
          else if (i == 8) {
            strcpy(perguntas[i].pergunta, "Qual a capital da França?");
            strcpy(perguntas[i].alternativas[0], "Roma");
            strcpy(perguntas[i].alternativas[1], "Londres");
            strcpy(perguntas[i].alternativas[2], "Paris");
            strcpy(perguntas[i].alternativas[3], "Berlim");
            perguntas[i].resposta = 3;
        }
        
         // Pergunta 10
          else if (i == 9) {
            strcpy(perguntas[i].pergunta, "Qual o resultado de 9 x 9?");
            strcpy(perguntas[i].alternativas[0], "72");
            strcpy(perguntas[i].alternativas[1], "81");
            strcpy(perguntas[i].alternativas[2], "91");
            strcpy(perguntas[i].alternativas[3], "99");
            perguntas[i].resposta = 2;
        }
        
             // Pergunta 11
          else if (i == 10 ) {
            strcpy(perguntas[i].pergunta, "Qual é o maior oceano da Terra?");
            strcpy(perguntas[i].alternativas[0], "Oceano Atlântico");
            strcpy(perguntas[i].alternativas[1], "Oceano Índico");
            strcpy(perguntas[i].alternativas[2], "Oceano Ártico");
            strcpy(perguntas[i].alternativas[3], "Oceano Pacífico");
            perguntas[i].resposta = 4;
        }

        
         // Pergunta 
          else if (i == ) {
            strcpy(perguntas[i].pergunta, " ");
            strcpy(perguntas[i].alternativas[0], " ");
            strcpy(perguntas[i].alternativas[1], " ");
            strcpy(perguntas[i].alternativas[2], " ");
            strcpy(perguntas[i].alternativas[3], " ");
            perguntas[i].resposta = ;
        }

        
         // Pergunta 
          else if (i == ) {
            strcpy(perguntas[i].pergunta, " ");
            strcpy(perguntas[i].alternativas[0], " ");
            strcpy(perguntas[i].alternativas[1], " ");
            strcpy(perguntas[i].alternativas[2], " ");
            strcpy(perguntas[i].alternativas[3], " ");
            perguntas[i].resposta = ;
        }

        
         // Pergunta 
          else if (i == ) {
            strcpy(perguntas[i].pergunta, " ");
            strcpy(perguntas[i].alternativas[0], " ");
            strcpy(perguntas[i].alternativas[1], " ");
            strcpy(perguntas[i].alternativas[2], " ");
            strcpy(perguntas[i].alternativas[3], " ");
            perguntas[i].resposta = ;
        }
        
        // Escrever pergunta no arquivo
        fwrite(&perguntas[i], sizeof(Pergunta), 1, arquivo_perguntas);

        i++;
    }

    fclose(arquivo_perguntas);
//madebyRodrigoCastanho
    printf("Perguntas escritas com sucesso!\n");

    return 0;
}



         // Pergunta 
          else if (i == ) {
            strcpy(perguntas[i].pergunta, " ");
            strcpy(perguntas[i].alternativas[0], " ");
            strcpy(perguntas[i].alternativas[1], " ");
            strcpy(perguntas[i].alternativas[2], " ");
            strcpy(perguntas[i].alternativas[3], " ");
            perguntas[i].resposta = ;
        }
        

