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
            strcpy(perguntas[i].pergunta, "Qual e o maior oceano da Terra?");
            strcpy(perguntas[i].alternativas[0], "Oceano Atlântico");
            strcpy(perguntas[i].alternativas[1], "Oceano Índico");
            strcpy(perguntas[i].alternativas[2], "Oceano Ártico");
            strcpy(perguntas[i].alternativas[3], "Oceano Pacífico");
            perguntas[i].resposta = 4;
        }


         // Pergunta 12
          else if (i == 11) {
            strcpy(perguntas[i].pergunta, " Qual o nome da estrela mais próxima da Terra?");
            strcpy(perguntas[i].alternativas[0], "Alpha Centauri");
            strcpy(perguntas[i].alternativas[1], "Sol");
            strcpy(perguntas[i].alternativas[2], "Sírius");
            strcpy(perguntas[i].alternativas[3], "Betelgeuse");
            perguntas[i].resposta = 2;
        }


         // Pergunta 13
          else if (i == 12) {
            strcpy(perguntas[i].pergunta, "Quantos segundos ha em uma hora?");
            strcpy(perguntas[i].alternativas[0], "600");
            strcpy(perguntas[i].alternativas[1], "3.600");
            strcpy(perguntas[i].alternativas[2], "60.000");
            strcpy(perguntas[i].alternativas[3], "36.000");
            perguntas[i].resposta = 2;
        }


         // Pergunta 14
          else if (i == 13) {
            strcpy(perguntas[i].pergunta, "Quem pintou A Monalisa?");
            strcpy(perguntas[i].alternativas[0], "Michelangelo");
            strcpy(perguntas[i].alternativas[1], "Leonardo da Vinci");
            strcpy(perguntas[i].alternativas[2], "Rembrandt");
            strcpy(perguntas[i].alternativas[3], "Van Gogh");
            perguntas[i].resposta = 2;
        }


         // Pergunta 15
          else if (i == 14 ) {
            strcpy(perguntas[i].pergunta, "Qual e o nome da molecula de acucar comum?");
            strcpy(perguntas[i].alternativas[0], "Lactose");
            strcpy(perguntas[i].alternativas[1], "Glicose");
            strcpy(perguntas[i].alternativas[2], "Maltose");
            strcpy(perguntas[i].alternativas[3], "Frutose");
            perguntas[i].resposta = 2;
        }


         // Pergunta 16
          else if (i == 15) {
            strcpy(perguntas[i].pergunta, "Qual o país mais populoso do mundo?");
            strcpy(perguntas[i].alternativas[0], "Estados Unidos");
            strcpy(perguntas[i].alternativas[1], "Índia");
            strcpy(perguntas[i].alternativas[2], "Brasil");
            strcpy(perguntas[i].alternativas[3], "China");
            perguntas[i].resposta = 4;
        }


         // Pergunta 17
          else if (i == 16) {
            strcpy(perguntas[i].pergunta, "Qual foi o primeiro homem a pisar na Lua?");
            strcpy(perguntas[i].alternativas[0], "Neil Armstrong");
            strcpy(perguntas[i].alternativas[1], "Buzz Aldrin");
            strcpy(perguntas[i].alternativas[2], "Yuri Gagarin");
            strcpy(perguntas[i].alternativas[3], "John Glenn");
            perguntas[i].resposta = 1;
        }


         // Pergunta 18
          else if (i == 17 ) {
            strcpy(perguntas[i].pergunta, "Qual é o valor do número Pi arredondado para duas casas decimais?");
            strcpy(perguntas[i].alternativas[0], "3.12");
            strcpy(perguntas[i].alternativas[1], "3.14");
            strcpy(perguntas[i].alternativas[2], "3.10");
            strcpy(perguntas[i].alternativas[3], "3.16");
            perguntas[i].resposta = 2 ;
        }

         // Pergunta 19
          else if (i == 18) {
            strcpy(perguntas[i].pergunta, "Em que continente está localizado o Brasil?");
            strcpy(perguntas[i].alternativas[0], "África");
            strcpy(perguntas[i].alternativas[1], "Oceania");
            strcpy(perguntas[i].alternativas[2], "Pangeia");
            strcpy(perguntas[i].alternativas[3], "América do Sul");
            perguntas[i].resposta = 4;
        }

         // Pergunta 20
          else if (i ==19 ) {
            strcpy(perguntas[i].pergunta, "Quem é o autor de A Origem das Espécies?");
            strcpy(perguntas[i].alternativas[0], "Albert Einstein");
            strcpy(perguntas[i].alternativas[1], "Isaac Newton");
            strcpy(perguntas[i].alternativas[2], "Charles Darwin");
            strcpy(perguntas[i].alternativas[3], "Galileo Galilei");
            perguntas[i].resposta = 3;
        }

            // Pergunta 21
            else if (i == 20) {
                strcpy(perguntas[i].pergunta, "Qual o elemento quimico com simbolo Fe?");
                strcpy(perguntas[i].alternativas[0], "Ferro");
                strcpy(perguntas[i].alternativas[1], "Fosforo");
                strcpy(perguntas[i].alternativas[2], "Fluor");
                strcpy(perguntas[i].alternativas[3], "Fulgencio");
                perguntas[i].resposta = 1;
            }
            // Pergunta 22
            else if (i == 21) {
                strcpy(perguntas[i].pergunta, "Qual e a cor do sangue humano?");
                strcpy(perguntas[i].alternativas[0], "Azul");
                strcpy(perguntas[i].alternativas[1], "Verde");
                strcpy(perguntas[i].alternativas[2], "Vermelho");
                strcpy(perguntas[i].alternativas[3], "Amarelo");
                perguntas[i].resposta = 3;
            }
            // Pergunta 23
            else if (i == 22) {
                strcpy(perguntas[i].pergunta, "Qual e a capital da Italia?");
                strcpy(perguntas[i].alternativas[0], "Milao");
                strcpy(perguntas[i].alternativas[1], "Roma");
                strcpy(perguntas[i].alternativas[2], "Veneza");
                strcpy(perguntas[i].alternativas[3], "Florença");
                perguntas[i].resposta = 2;
            }
            // Pergunta 24
            else if (i == 23) {
                strcpy(perguntas[i].pergunta, "Qual e o maior animal terrestre?");
                strcpy(perguntas[i].alternativas[0], "Elefante");
                strcpy(perguntas[i].alternativas[1], "Girafa");
                strcpy(perguntas[i].alternativas[2], "Rinoceronte");
                strcpy(perguntas[i].alternativas[3], "Baleia");
                perguntas[i].resposta = 1;
            }
            // Pergunta 25
            else if (i == 24) {
                strcpy(perguntas[i].pergunta, "Qual e o maior continente?");
                strcpy(perguntas[i].alternativas[0], "Africa");
                strcpy(perguntas[i].alternativas[1], "Asia");
                strcpy(perguntas[i].alternativas[2], "America");
                strcpy(perguntas[i].alternativas[3], "Europa");
                perguntas[i].resposta = 2;
            }
            // Pergunta 26
            else if (i == 25) {
                strcpy(perguntas[i].pergunta, "Qual e a moeda do Japao?");
                strcpy(perguntas[i].alternativas[0], "Yuan");
                strcpy(perguntas[i].alternativas[1], "Won");
                strcpy(perguntas[i].alternativas[2], "Yen");
                strcpy(perguntas[i].alternativas[3], "Dolar");
                perguntas[i].resposta = 3;
            }
            // Pergunta 27
            else if (i == 26) {
                strcpy(perguntas[i].pergunta, "Qual e a montanha mais alta do mundo?");
                strcpy(perguntas[i].alternativas[0], "K2");
                strcpy(perguntas[i].alternativas[1], "Everest");
                strcpy(perguntas[i].alternativas[2], "Kilimanjaro");
                strcpy(perguntas[i].alternativas[3], "Makalu");
                perguntas[i].resposta = 2;
            }
            // Pergunta 28
            else if (i == 27) {
                strcpy(perguntas[i].pergunta, "Quantos estados tem o Brasil?");
                strcpy(perguntas[i].alternativas[0], "24");
                strcpy(perguntas[i].alternativas[1], "26");
                strcpy(perguntas[i].alternativas[2], "27");
                strcpy(perguntas[i].alternativas[3], "25");
                perguntas[i].resposta = 3;
            }
            // Pergunta 29
            else if (i == 28) {
                strcpy(perguntas[i].pergunta, "Qual e o maior deserto do mundo?");
                strcpy(perguntas[i].alternativas[0], "Sahara");
                strcpy(perguntas[i].alternativas[1], "Gobi");
                strcpy(perguntas[i].alternativas[2], "Atacama");
                strcpy(perguntas[i].alternativas[3], "Kalahari");
                perguntas[i].resposta = 1;
            }
            // Pergunta 30
            else if (i == 29) {
                strcpy(perguntas[i].pergunta, "Qual o pais conhecido como a Terra do Sol Nascente?");
                strcpy(perguntas[i].alternativas[0], "China");
                strcpy(perguntas[i].alternativas[1], "Coreia");
                strcpy(perguntas[i].alternativas[2], "Japao");
                strcpy(perguntas[i].alternativas[3], "Tailandia");
                perguntas[i].resposta = 3;
            }
            // Pergunta 31
            else if (i == 30) {
                strcpy(perguntas[i].pergunta, "Qual e o sistema de escrita dos japoneses?");
                strcpy(perguntas[i].alternativas[0], "Kanji");
                strcpy(perguntas[i].alternativas[1], "Hiragana");
                strcpy(perguntas[i].alternativas[2], "Katakana");
                strcpy(perguntas[i].alternativas[3], "Todos os anteriores");
                perguntas[i].resposta = 4;
            }
            // Pergunta 32
            else if (i == 31) {
                strcpy(perguntas[i].pergunta, "Qual e o maior lago do mundo?");
                strcpy(perguntas[i].alternativas[0], "Lago Superior");
                strcpy(perguntas[i].alternativas[1], "Mar Caspio");
                strcpy(perguntas[i].alternativas[2], "Lago Victoria");
                strcpy(perguntas[i].alternativas[3], "Lago Baikal");
                perguntas[i].resposta = 2;
            }
            // Pergunta 33
            else if (i == 32) {
                strcpy(perguntas[i].pergunta, "Qual e o planeta mais proximo do sol?");
                strcpy(perguntas[i].alternativas[0], "Mercurio");
                strcpy(perguntas[i].alternativas[1], "Venus");
                strcpy(perguntas[i].alternativas[2], "Terra");
                strcpy(perguntas[i].alternativas[3], "Marte");
                perguntas[i].resposta = 1;
            }
            // Pergunta 34
            else if (i == 33) {
                strcpy(perguntas[i].pergunta, "Quantas cores tem o arco-iris?");
                strcpy(perguntas[i].alternativas[0], "5");
                strcpy(perguntas[i].alternativas[1], "6");
                strcpy(perguntas[i].alternativas[2], "7");
                strcpy(perguntas[i].alternativas[3], "8");
                perguntas[i].resposta = 3;
            }
            // Pergunta 35
            else if (i == 34) {
                strcpy(perguntas[i].pergunta, "Quem escreveu 'O Pequeno Principe'?");
                strcpy(perguntas[i].alternativas[0], "Antoine de Saint-Exupery");
                strcpy(perguntas[i].alternativas[1], "Victor Hugo");
                strcpy(perguntas[i].alternativas[2], "Jules Verne");
                strcpy(perguntas[i].alternativas[3], "Charles Dickens");
                perguntas[i].resposta = 1;
            }
            // Pergunta 36
            else if (i == 35) {
                strcpy(perguntas[i].pergunta, "Qual e o nome do famoso quadro de Edvard Munch?");
                strcpy(perguntas[i].alternativas[0], "A Noite Estrelada");
                strcpy(perguntas[i].alternativas[1], "O Grito");
                strcpy(perguntas[i].alternativas[2], "A Persistencia da Memoria");
                strcpy(perguntas[i].alternativas[3], "A Criacao de Adão");
                perguntas[i].resposta = 2;
            }
            // Pergunta 37
            else if (i == 36) {
                strcpy(perguntas[i].pergunta, "Qual e o maior organo do corpo humano?");
                strcpy(perguntas[i].alternativas[0], "Coracao");
                strcpy(perguntas[i].alternativas[1], "Figado");
                strcpy(perguntas[i].alternativas[2], "Pele");
                strcpy(perguntas[i].alternativas[3], "Pulmao");
                perguntas[i].resposta = 3;
            }
            // Pergunta 38
            else if (i == 37) {
                strcpy(perguntas[i].pergunta, "Qual e a capital da Alemanha?");
                strcpy(perguntas[i].alternativas[0], "Berlim");
                strcpy(perguntas[i].alternativas[1], "Munique");
                strcpy(perguntas[i].alternativas[2], "Hamburgo");
                strcpy(perguntas[i].alternativas[3], "Frankfurt");
                perguntas[i].resposta = 1;
            }
            // Pergunta 39
            else if (i == 38) {
                strcpy(perguntas[i].pergunta, "Qual e o principal ingrediente do guacamole?");
                strcpy(perguntas[i].alternativas[0], "Tomate");
                strcpy(perguntas[i].alternativas[1], "Abacate");
                strcpy(perguntas[i].alternativas[2], "Cebola");
                strcpy(perguntas[i].alternativas[3], "Limão");
                perguntas[i].resposta = 2;
            }
            // Pergunta 40
            else if (i == 39) {
                strcpy(perguntas[i].pergunta, "Quem foi o primeiro homem a pisar na Lua?");
                strcpy(perguntas[i].alternativas[0], "Buzz Aldrin");
                strcpy(perguntas[i].alternativas[1], "Neil Armstrong");
                strcpy(perguntas[i].alternativas[2], "Yuri Gagarin");
                strcpy(perguntas[i].alternativas[3], "John Glenn");
                perguntas[i].resposta = 2;
            }
            // Pergunta 41
            else if (i == 40) {
                strcpy(perguntas[i].pergunta, "Qual e o maior oceano do mundo?");
                strcpy(perguntas[i].alternativas[0], "Oceano Atlantico");
                strcpy(perguntas[i].alternativas[1], "Oceano Indico");
                strcpy(perguntas[i].alternativas[2], "Oceano Pacifico");
                strcpy(perguntas[i].alternativas[3], "Oceano Artico");
                perguntas[i].resposta = 3;
            }
            // Pergunta 42
            else if (i == 41) {
                strcpy(perguntas[i].pergunta, "Qual e a primeira letra do alfabeto grego?");
                strcpy(perguntas[i].alternativas[0], "Beta");
                strcpy(perguntas[i].alternativas[1], "Alfa");
                strcpy(perguntas[i].alternativas[2], "Gama");
                strcpy(perguntas[i].alternativas[3], "Delta");
                perguntas[i].resposta = 2;
            }
            // Pergunta 43
            else if (i == 42) {
                strcpy(perguntas[i].pergunta, "Qual e o maior continente do mundo?");
                strcpy(perguntas[i].alternativas[0], "Asia");
                strcpy(perguntas[i].alternativas[1], "Africa");
                strcpy(perguntas[i].alternativas[2], "America");
                strcpy(perguntas[i].alternativas[3], "Europa");
                perguntas[i].resposta = 1;
            }
            // Pergunta 44
            else if (i == 43) {
                strcpy(perguntas[i].pergunta, "Qual e o unico mamifero que pode voar?");
                strcpy(perguntas[i].alternativas[0], "Morcego");
                strcpy(perguntas[i].alternativas[1], "Esquilo");
                strcpy(perguntas[i].alternativas[2], "Pato");
                strcpy(perguntas[i].alternativas[3], "Rato");
                perguntas[i].resposta = 1;
            }
            // Pergunta 45
            else if (i == 44) {
                strcpy(perguntas[i].pergunta, "Qual e o animal mais rapido do mundo?");
                strcpy(perguntas[i].alternativas[0], "Guepardo");
                strcpy(perguntas[i].alternativas[1], "Leao");
                strcpy(perguntas[i].alternativas[2], "Falcao Peregrino");
                strcpy(perguntas[i].alternativas[3], "Antilope");
                perguntas[i].resposta = 3;
            }
            // Pergunta 46
            else if (i == 45) {
                strcpy(perguntas[i].pergunta, "Qual e a capital da Franca?");
                strcpy(perguntas[i].alternativas[0], "Londres");
                strcpy(perguntas[i].alternativas[1], "Berlim");
                strcpy(perguntas[i].alternativas[2], "Paris");
                strcpy(perguntas[i].alternativas[3], "Roma");
                perguntas[i].resposta = 3;
            }
            // Pergunta 47
            else if (i == 46) {
                strcpy(perguntas[i].pergunta, "Qual e o maior mamifero do mundo?");
                strcpy(perguntas[i].alternativas[0], "Elefante");
                strcpy(perguntas[i].alternativas[1], "Baleia Azul");
                strcpy(perguntas[i].alternativas[2], "Tubarão");
                strcpy(perguntas[i].alternativas[3], "Girafa");
                perguntas[i].resposta = 2;
            }
            // Pergunta 48
            else if (i == 47) {
                strcpy(perguntas[i].pergunta, "Qual e a unidade de medida de temperatura?");
                strcpy(perguntas[i].alternativas[0], "Metro");
                strcpy(perguntas[i].alternativas[1], "Litro");
                strcpy(perguntas[i].alternativas[2], "Celsius");
                strcpy(perguntas[i].alternativas[3], "Grama");
                perguntas[i].resposta = 3;
            }
            // Pergunta 49
            else if (i == 48) {
                strcpy(perguntas[i].pergunta, "Quem pintou a Mona Lisa?");
                strcpy(perguntas[i].alternativas[0], "Pablo Picasso");
                strcpy(perguntas[i].alternativas[1], "Leonardo da Vinci");
                strcpy(perguntas[i].alternativas[2], "Vincent van Gogh");
                strcpy(perguntas[i].alternativas[3], "Michelangelo");
                perguntas[i].resposta = 2;
            }
            // Pergunta 50
            else if (i == 49) {
                strcpy(perguntas[i].pergunta, "Qual e a capital do Brasil?");
                strcpy(perguntas[i].alternativas[0], "Rio de Janeiro");
                strcpy(perguntas[i].alternativas[1], "Sao Paulo");
                strcpy(perguntas[i].alternativas[2], "Brasilia");
                strcpy(perguntas[i].alternativas[3], "Belo Horizonte");
                perguntas[i].resposta = 3;

        // Pergunta: 51
        else if (i == 50) {
            strcpy(perguntas[i].pergunta, "Em que ano o Brasil ganhou sua primeira Copa do Mundo de futebol? ");
            strcpy(perguntas[i].alternativas[0], "1950 ");
            strcpy(perguntas[i].alternativas[1], "1954 ");
            strcpy(perguntas[i].alternativas[2], "1958 ");
            strcpy(perguntas[i].alternativas[3], "1962 ");
            perguntas[i].resposta = 3; // 2+1
        }
        
        // Pergunta 52
        else if (i == 51) {
            strcpy(perguntas[i].pergunta, "Qual e o nome do rio mais longo do mundo? ");
            strcpy(perguntas[i].alternativas[0], "Rio Nilo");
            strcpy(perguntas[i].alternativas[1], "Rio Amazonas");
            strcpy(perguntas[i].alternativas[2], "Rio Yangtze");
            strcpy(perguntas[i].alternativas[3], "Rio Mississipi");
            perguntas[i].resposta = 1; // 0+1
        }
        
        // Pergunta 53
        else if (i == 52) {
            strcpy(perguntas[i].pergunta, "Qual a velocidade da luz no vacuo?");
            strcpy(perguntas[i].alternativas[0], "150000 km/s");
            strcpy(perguntas[i].alternativas[1], "300000 km/s ");
            strcpy(perguntas[i].alternativas[2], "500000 km/s ");
            strcpy(perguntas[i].alternativas[3], "100000 km/s ");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 54
        else if (i == 53) {
            strcpy(perguntas[i].pergunta, "Quem foi o primeiro presidente dos Estados Unidos?");
            strcpy(perguntas[i].alternativas[0], "Abraham Lincoln");
            strcpy(perguntas[i].alternativas[1], "George Washington ");
            strcpy(perguntas[i].alternativas[2], "Thomas Jefferson ");
            strcpy(perguntas[i].alternativas[3], "John Adams ");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 55
        else if (i == 54) {
            strcpy(perguntas[i].pergunta, "Qual e o nome cientifico dos seres humanos?");
            strcpy(perguntas[i].alternativas[0], "Homo erectus ");
            strcpy(perguntas[i].alternativas[1], "Homo habilis ");
            strcpy(perguntas[i].alternativas[2], "Homo sapiens ");
            strcpy(perguntas[i].alternativas[3], "Australopithecus ");
            perguntas[i].resposta = 3; // 2+1
        }
        
        // Pergunta 56
        else if (i == 55) {
            strcpy(perguntas[i].pergunta, "Qual e o pais com o maior numero de ilhas no mundo? ");
            strcpy(perguntas[i].alternativas[0], "Indonesia");
            strcpy(perguntas[i].alternativas[1], "Filipinas ");
            strcpy(perguntas[i].alternativas[2], "Suecia ");
            strcpy(perguntas[i].alternativas[3], "Japao ");
            perguntas[i].resposta = 3; // 2+1
        }
        
        // Pergunta 57
        else if (i == 56) {
            strcpy(perguntas[i].pergunta, "Em que continente esta localizada a maior parte do Egito? ");
            strcpy(perguntas[i].alternativas[0], "Europa ");
            strcpy(perguntas[i].alternativas[1], "Africa ");
            strcpy(perguntas[i].alternativas[2], "Asia ");
            strcpy(perguntas[i].alternativas[3], "America ");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 58
        else if (i == 57) {
            strcpy(perguntas[i].pergunta, "Qual foi o primeiro satelite artificial lancado ao espaco?");
            strcpy(perguntas[i].alternativas[0], "Apollo 11 ");
            strcpy(perguntas[i].alternativas[1], "Sputnik 1 ");
            strcpy(perguntas[i].alternativas[2], "Hubble ");
            strcpy(perguntas[i].alternativas[3], "Voyager 1 ");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 59
        else if (i == 58) {
            strcpy(perguntas[i].pergunta, "Qual destes animais e um mamifero?");
            strcpy(perguntas[i].alternativas[0], "Galinha ");
            strcpy(perguntas[i].alternativas[1], "Crocodilo ");
            strcpy(perguntas[i].alternativas[2], "Morcego ");
            strcpy(perguntas[i].alternativas[3], "Tubarao ");
            perguntas[i].resposta = 3; // 2+1
        }
        
        // Pergunta 60
        else if (i == 59) {
            strcpy(perguntas[i].pergunta, "Qual desses numeros e um numero primo?");
            strcpy(perguntas[i].alternativas[0], "12");
            strcpy(perguntas[i].alternativas[1], "15");
            strcpy(perguntas[i].alternativas[2], "17");
            strcpy(perguntas[i].alternativas[3], "21");
            perguntas[i].resposta = 3; // 2+1
        }
        
        // Pergunta 61
        else if (i == 60) {
            strcpy(perguntas[i].pergunta, "Qual e a capital da Espanha?");
            strcpy(perguntas[i].alternativas[0], "Lisboa");
            strcpy(perguntas[i].alternativas[1], "Barcelona");
            strcpy(perguntas[i].alternativas[2], "Sevilha");
            strcpy(perguntas[i].alternativas[3], "Madri");
            perguntas[i].resposta = 4; // 3+1
        }
        
        // Pergunta 62
        else if (i == 61) {
            strcpy(perguntas[i].pergunta, "Qual e o maior estado do Brasil em area territorial?");
            strcpy(perguntas[i].alternativas[0], "Amazonas");
            strcpy(perguntas[i].alternativas[1], "Para");
            strcpy(perguntas[i].alternativas[2], "Mato Grosso");
            strcpy(perguntas[i].alternativas[3], "Bahia");
            perguntas[i].resposta = 1; // 0+1
        }
        
        // Pergunta 63
        else if (i == 62) {
            strcpy(perguntas[i].pergunta, "Qual foi o ultimo pais a ganhar a Copa do Mundo de Futebol antes de 2022?");
            strcpy(perguntas[i].alternativas[0], "Brasil");
            strcpy(perguntas[i].alternativas[1], "Alemanha");
            strcpy(perguntas[i].alternativas[2], "Franca");
            strcpy(perguntas[i].alternativas[3], "Argentina");
            perguntas[i].resposta = 3; // 2+1
        }
        
        // Pergunta 64
        else if (i == 63) {
            strcpy(perguntas[i].pergunta, "Qual desses cientistas desenvolveu a vacina contra a poliomielite?");
            strcpy(perguntas[i].alternativas[0], "Alexander Fleming");
            strcpy(perguntas[i].alternativas[1], "Jonas Salk");
            strcpy(perguntas[i].alternativas[2], "Louis Pasteur");
            strcpy(perguntas[i].alternativas[3], "Gregor Mendel");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 65
        else if (i == 64) {
            strcpy(perguntas[i].pergunta, "Quantos graus tem um triangulo equilatero?");
            strcpy(perguntas[i].alternativas[0], "45º");
            strcpy(perguntas[i].alternativas[1], "60º");
            strcpy(perguntas[i].alternativas[2], "90º");
            strcpy(perguntas[i].alternativas[3], "180º");
            perguntas[i].resposta = 4; // 3+1
        }
        
        // Pergunta 66
        else if (i == 65) {
            strcpy(perguntas[i].pergunta, "Em que ano foi lancado o primeiro iPhone?");
            strcpy(perguntas[i].alternativas[0], "2005");
            strcpy(perguntas[i].alternativas[1], "2007");
            strcpy(perguntas[i].alternativas[2], "2010");
            strcpy(perguntas[i].alternativas[3], "2012");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 67
        else if (i == 66) {
            strcpy(perguntas[i].pergunta, "Qual e o simbolo quimico do Ferro?");
            strcpy(perguntas[i].alternativas[0], "F");
            strcpy(perguntas[i].alternativas[1], "Fe");
            strcpy(perguntas[i].alternativas[2], "Fr");
            strcpy(perguntas[i].alternativas[3], "Fi");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 68
        else if (i == 67) {
            strcpy(perguntas[i].pergunta, "Qual e a capital da Alemanha?");
            strcpy(perguntas[i].alternativas[0], "Berlim");
            strcpy(perguntas[i].alternativas[1], "Munique");
            strcpy(perguntas[i].alternativas[2], "Frankfurt");
            strcpy(perguntas[i].alternativas[3], "Hamburgo");
            perguntas[i].resposta = 1; // 0+1
        }
        
        // Pergunta 69
        else if (i == 68) {
            strcpy(perguntas[i].pergunta, "Qual e o maior continente do mundo?");
            strcpy(perguntas[i].alternativas[0], "Africa");
            strcpy(perguntas[i].alternativas[1], "Asia");
            strcpy(perguntas[i].alternativas[2], "America do Sul");
            strcpy(perguntas[i].alternativas[3], "Europa");
            perguntas[i].resposta = 2; // 1+1
        }
        
        // Pergunta 70
        else if (i == 69) {
            strcpy(perguntas[i].pergunta, "Qual e o maior oceano do mundo?");
            strcpy(perguntas[i].alternativas[0], "Oceano Atlantico");
            strcpy(perguntas[i].alternativas[1], "Oceano Indico");
            strcpy(perguntas[i].alternativas[2], "Oceano Pacifico");
            strcpy(perguntas[i].alternativas[3], "Oceano Arctico");
            perguntas[i].resposta = 3; // 2+1
        }
        // Pergunta 71
        else if (i == 70) {
            strcpy(perguntas[i].pergunta, "Quantos aneis tem o planeta Saturno?");
            strcpy(perguntas[i].alternativas[0], "1");
            strcpy(perguntas[i].alternativas[1], "7");
            strcpy(perguntas[i].alternativas[2], "4");
            strcpy(perguntas[i].alternativas[3], "9");
            perguntas[i].resposta = 2; // 7 (correta)
        }
        
        // Pergunta 72
        else if (i == 71) {
            strcpy(perguntas[i].pergunta, "Qual é o maior orgao do corpo humano?");
            strcpy(perguntas[i].alternativas[0], "Pulmao");
            strcpy(perguntas[i].alternativas[1], "Coraçao");
            strcpy(perguntas[i].alternativas[2], "Figado");
            strcpy(perguntas[i].alternativas[3], "Pele");
            perguntas[i].resposta = 4; // Pele (correta)
        }
        
        // Pergunta 73
        else if (i == 72) {
            strcpy(perguntas[i].pergunta, "Qual foi o pais sede das Olimpiadas de 2016?");
            strcpy(perguntas[i].alternativas[0], "Londres");
            strcpy(perguntas[i].alternativas[1], "Toquio");
            strcpy(perguntas[i].alternativas[2], "Rio de Janeiro");
            strcpy(perguntas[i].alternativas[3], "Pequim");
            perguntas[i].resposta = 3; // Rio de Janeiro (correta)
        }
        
        // Pergunta 74
        else if (i == 73) {
            strcpy(perguntas[i].pergunta, "Qual e o continente mais populoso do mundo?");
            strcpy(perguntas[i].alternativas[0], "Europa");
            strcpy(perguntas[i].alternativas[1], "Africa");
            strcpy(perguntas[i].alternativas[2], "Asia");
            strcpy(perguntas[i].alternativas[3], "America do Norte");
            perguntas[i].resposta = 3; // Ásia (correta)
        }
        
        // Pergunta 75
        else if (i == 74) {
            strcpy(perguntas[i].pergunta, "Quem descobriu a Penicilina?");
            strcpy(perguntas[i].alternativas[0], "Marie Curie");
            strcpy(perguntas[i].alternativas[1], "Alexander Fleming");
            strcpy(perguntas[i].alternativas[2], "Isaac Newton");
            strcpy(perguntas[i].alternativas[3], "Gregor Mendel");
            perguntas[i].resposta = 2; // Alexander Fleming (correta)
        }
        
        // Pergunta 76
        else if (i == 75) {
            strcpy(perguntas[i].pergunta, "Qual foi a primeira mulher a ganhar um Premio Nobel?");
            strcpy(perguntas[i].alternativas[0], "Rosalind Franklin");
            strcpy(perguntas[i].alternativas[1], "Ada Lovelace");
            strcpy(perguntas[i].alternativas[2], "Marie Curie");
            strcpy(perguntas[i].alternativas[3], "Jane Goodall");
            perguntas[i].resposta = 3; // Marie Curie (correta)
        }
        
        // Pergunta 77
        else if (i == 76) {
            strcpy(perguntas[i].pergunta, "Qual e a altura media da Torre Eiffel?");
            strcpy(perguntas[i].alternativas[0], "200 metros");
            strcpy(perguntas[i].alternativas[1], "324 metros");
            strcpy(perguntas[i].alternativas[2], "400 metros");
            strcpy(perguntas[i].alternativas[3], "500 metros");
            perguntas[i].resposta = 2; // 324 metros (correta)
        }
        
        // Pergunta 78
        else if (i == 77) {
            strcpy(perguntas[i].pergunta, "Qual e o maior pais da America do Sul?");
            strcpy(perguntas[i].alternativas[0], "Argentina");
            strcpy(perguntas[i].alternativas[1], "Chile");
            strcpy(perguntas[i].alternativas[2], "Brasil");
            strcpy(perguntas[i].alternativas[3], "Colombia");
            perguntas[i].resposta = 3; // Brasil (correta)
        }
        
        // Pergunta 79
        else if (i == 78) {
            strcpy(perguntas[i].pergunta, "Qual e a capital do Canada?");
            strcpy(perguntas[i].alternativas[0], "Vancouver");
            strcpy(perguntas[i].alternativas[1], "Ottawa");
            strcpy(perguntas[i].alternativas[2], "Toronto");
            strcpy(perguntas[i].alternativas[3], "Montreal");
            perguntas[i].resposta = 2; // Ottawa (correta)
        }
        
        // Pergunta 80
        else if (i == 79) {
            strcpy(perguntas[i].pergunta, "Qual desses instrumentos mede a pressão atmosferica?");
            strcpy(perguntas[i].alternativas[0], "Termometro");
            strcpy(perguntas[i].alternativas[1], "Barometro");
            strcpy(perguntas[i].alternativas[2], "Higrometro");
            strcpy(perguntas[i].alternativas[3], "Altimetro");
            perguntas[i].resposta = 2; // Barômetro (correta)
        }
        
        // Pergunta 81
        else if (i == 80) {
            strcpy(perguntas[i].pergunta, "Quantos lados tem um octogono?");
            strcpy(perguntas[i].alternativas[0], "6");
            strcpy(perguntas[i].alternativas[1], "7");
            strcpy(perguntas[i].alternativas[2], "8");
            strcpy(perguntas[i].alternativas[3], "9");
            perguntas[i].resposta = 3; // 8 (correta)
        }
        
        // Pergunta 82
        else if (i == 81) {
            strcpy(perguntas[i].pergunta, "Qual é o gas utilizado em baloes de festa para que eles flutuem?");
            strcpy(perguntas[i].alternativas[0], "Oxigenio");
            strcpy(perguntas[i].alternativas[1], "Helio");
            strcpy(perguntas[i].alternativas[2], "Hidrogenio");
            strcpy(perguntas[i].alternativas[3], "Dioxido de carbono");
            perguntas[i].resposta = 2; // Hélio (correta)
        }
        
        // Pergunta 83
        else if (i == 82) {
            strcpy(perguntas[i].pergunta, "Em que continente está localizada a Australia?");
            strcpy(perguntas[i].alternativas[0], "America do Sul");
            strcpy(perguntas[i].alternativas[1], "Africa");
            strcpy(perguntas[i].alternativas[2], "Oceania");
            strcpy(perguntas[i].alternativas[3], "Europa");
            perguntas[i].resposta = 3; // Oceania (correta)
        }
        
        // Pergunta 84
        else if (i == 83) {
            strcpy(perguntas[i].pergunta, "Quem escreveu \"Hamlet\"?");
            strcpy(perguntas[i].alternativas[0], "Dante Alighieri");
            strcpy(perguntas[i].alternativas[1], "William Shakespeare");
            strcpy(perguntas[i].alternativas[2], "Victor Hugo");
            strcpy(perguntas[i].alternativas[3], "Franz Kafka");
            perguntas[i].resposta = 2; // William Shakespeare (correta)
        }
        
        // Pergunta 85
        else if (i == 84) {
            strcpy(perguntas[i].pergunta, "Qual desses paises nao está localizado na America do Sul?");
            strcpy(perguntas[i].alternativas[0], "Uruguai");
            strcpy(perguntas[i].alternativas[1], "Chile");
            strcpy(perguntas[i].alternativas[2], "Peru");
            strcpy(perguntas[i].alternativas[3], "Mexico");
            perguntas[i].resposta = 4; // México (correta)
        }
        
        // Pergunta 86
        else if (i == 85) {
            strcpy(perguntas[i].pergunta, "Qual e a camada mais externa da Terra?");
            strcpy(perguntas[i].alternativas[0], "Manto");
            strcpy(perguntas[i].alternativas[1], "Nucleo");
            strcpy(perguntas[i].alternativas[2], "Crosta");
            strcpy(perguntas[i].alternativas[3], "Litosfera");
            perguntas[i].resposta = 3; // Crosta (correta)
        }
        
        // Pergunta 87
        else if (i == 86) {
            strcpy(perguntas[i].pergunta, "Quem foi o lider dos nazistas durante a Segunda Guerra Mundial?");
            strcpy(perguntas[i].alternativas[0], "Benito Mussolini");
            strcpy(perguntas[i].alternativas[1], "Adolf Hitler");
            strcpy(perguntas[i].alternativas[2], "Joseph Stalin");
            strcpy(perguntas[i].alternativas[3], "Francisco Franco");
            perguntas[i].resposta = 2; // Adolf Hitler (correta)
        }
                
        // Pergunta 88
        else if (i == 87) {
            strcpy(perguntas[i].pergunta, "Em que ano o Brasil proclamou sua independencia de Portugal?");
            strcpy(perguntas[i].alternativas[0], "1889");
            strcpy(perguntas[i].alternativas[1], "1822");
            strcpy(perguntas[i].alternativas[2], "1808");
            strcpy(perguntas[i].alternativas[3], "1830");
            perguntas[i].resposta = 2; // 1822 (correta)
        }
        
        // Pergunta 89
        else if (i == 88) {
            strcpy(perguntas[i].pergunta, "O que a sigla \"ADN\" representa em portugues?");
            strcpy(perguntas[i].alternativas[0], "Acido desoxirribonucleico");
            strcpy(perguntas[i].alternativas[1], "Acido ribonucleico");
            strcpy(perguntas[i].alternativas[2], "Adenosina");
            strcpy(perguntas[i].alternativas[3], "DNA");
            perguntas[i].resposta = 1; // Acido desoxirribonucleico (correta)
        }
        
        // Pergunta 90
        else if (i == 89) {
            strcpy(perguntas[i].pergunta, "Qual desses e um planeta anao?");
            strcpy(perguntas[i].alternativas[0], "Jupiter");
            strcpy(perguntas[i].alternativas[1], "Netuno");
            strcpy(perguntas[i].alternativas[2], "Plutao");
            strcpy(perguntas[i].alternativas[3], "Urano");
            perguntas[i].resposta = 3; // Plutao (correta)
        }
        
        // Pergunta 91
        else if (i == 90) {
            strcpy(perguntas[i].pergunta, "Qual foi o primeiro pais a industrializar-se?");
            strcpy(perguntas[i].alternativas[0], "Franca");
            strcpy(perguntas[i].alternativas[1], "Alemanha");
            strcpy(perguntas[i].alternativas[2], "Estados Unidos");
            strcpy(perguntas[i].alternativas[3], "Inglaterra");
            perguntas[i].resposta = 4; // Inglaterra (correta)
        }
        
        // Pergunta 92
        else if (i == 91) {
            strcpy(perguntas[i].pergunta, "Qual e o nome da galaxia em que o Sistema Solar esta localizado?");
            strcpy(perguntas[i].alternativas[0], "Via Lactea");
            strcpy(perguntas[i].alternativas[1], "Andromeda");
            strcpy(perguntas[i].alternativas[2], "Galaxia do Sombrero");
            strcpy(perguntas[i].alternativas[3], "Galaxia Triangular");
            perguntas[i].resposta = 1; // Via Lactea (correta)
        }
        
        // Pergunta 93
        else if (i == 92) {
            strcpy(perguntas[i].pergunta, "Qual desses animais e conhecido por sua capacidade de camuflagem?");
            strcpy(perguntas[i].alternativas[0], "Polvo");
            strcpy(perguntas[i].alternativas[1], "Golfinho");
            strcpy(perguntas[i].alternativas[2], "Gato");
            strcpy(perguntas[i].alternativas[3], "Urso");
            perguntas[i].resposta = 1; // Polvo (correta)
        }
        
        // Pergunta 94
        else if (i == 93) {
            strcpy(perguntas[i].pergunta, "Qual foi a ultima rainha da Franca antes da Revolucao Francesa?");
            strcpy(perguntas[i].alternativas[0], "Catarina de Medici");
            strcpy(perguntas[i].alternativas[1], "Maria Antonieta");
            strcpy(perguntas[i].alternativas[2], "Isabel II");
            strcpy(perguntas[i].alternativas[3], "Joana D'Arc");
            perguntas[i].resposta = 2; // Maria Antonieta (correta)
        }
        
        // Pergunta 95
        else if (i == 94) {
            strcpy(perguntas[i].pergunta, "Quem pintou o teto da Capela Sistina?");
            strcpy(perguntas[i].alternativas[0], "Leonardo da Vinci");
            strcpy(perguntas[i].alternativas[1], "Michelangelo");
            strcpy(perguntas[i].alternativas[2], "Rafael");
            strcpy(perguntas[i].alternativas[3], "Donatello");
            perguntas[i].resposta = 2; // Michelangelo (correta)
        }
        
        // Pergunta 96
        else if (i == 95) {
            strcpy(perguntas[i].pergunta,"Qual e o animal simbolo da WWF (Fundo Mundial para a Natureza)?");
            strcpy(perguntas[i].alternativas[0], "Tigre");
            strcpy(perguntas[i].alternativas[1], "Elefante");
            strcpy(perguntas[i].alternativas[2], "Panda ");
            strcpy(perguntas[i].alternativas[3], "Leao ");
            perguntas[i].resposta = 3; // Panda (correta)
        }
        
        // Pergunta 97
        else if (i == 96) {
            strcpy(perguntas[i].pergunta,"De onde e a invencao do chuveiro eletrico?" );
            strcpy(perguntas[i].alternativas[0], "Franca");
            strcpy(perguntas[i].alternativas[1], "Inglaterra");
            strcpy(perguntas[i].alternativas[2], "Brasil");
            strcpy(perguntas[i].alternativas[3], "Australia");
            perguntas[i].resposta = 3;
        }
        
        // Pergunta 98
        else if (i == 97) {
            strcpy(perguntas[i].pergunta,"Qual o livro mais vendido no mundo a seguir a Biblia?" );
            strcpy(perguntas[i].alternativas[0], "O Senhor dos Anies");
            strcpy(perguntas[i].alternativas[1], "Dom Quixote");
            strcpy(perguntas[i].alternativas[2], "O Pequeno Principe");
            strcpy(perguntas[i].alternativas[3], "Ela, a Feiticeira");
            perguntas[i].resposta =2 ;
        }
        
        // Pergunta 99
        else if (i == 98) {
            strcpy(perguntas[i].pergunta,"Qual a nacionalidade de Che Guevara?" );
            strcpy(perguntas[i].alternativas[0], "Boliviana");
            strcpy(perguntas[i].alternativas[1], "Cubana");
            strcpy(perguntas[i].alternativas[2], "Argentina");
            strcpy(perguntas[i].alternativas[3], "Peruana");
            perguntas[i].resposta = 3;
        }
        
        // Pergunta 100
        else if (i == 99) {
            strcpy(perguntas[i].pergunta,"Atualmente(2024), quantos elementos quimicos a tabela periodica possui?" );
            strcpy(perguntas[i].alternativas[0], "113");
            strcpy(perguntas[i].alternativas[1], "109");
            strcpy(perguntas[i].alternativas[2], "108");
            strcpy(perguntas[i].alternativas[3], "118");
            perguntas[i].resposta = 4;
        }
        fwrite(&perguntas[i], sizeof(Pergunta), 1, arquivo_perguntas);
        i++;
    }
    return 0;
}
  





         // Pergunta 
//else if (i == ) {
//strcpy(perguntas[i].pergunta, " ");
//strcpy(perguntas[i].alternativas[0], " ");
//strcpy(perguntas[i].alternativas[1], " ");
//strcpy(perguntas[i].alternativas[2], " ");
//strcpy(perguntas[i].alternativas[3], " ");
//perguntas[i].resposta = ;
//}


