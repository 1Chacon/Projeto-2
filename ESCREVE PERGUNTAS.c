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
            strcpy(perguntas[i].pergunta, "Quantos segundos há em uma hora?");
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
            strcpy(perguntas[i].pergunta, "Qual é o nome da molécula de açúcar comum?");
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
          else if (i ==20 ) {
            strcpy(perguntas[i].pergunta, "Qual animal é conhecido por ser o mais rápido em terra?");
            strcpy(perguntas[i].alternativas[0], "Leão");
            strcpy(perguntas[i].alternativas[1], "Leopardo");
            strcpy(perguntas[i].alternativas[2], "Guepardo");
            strcpy(perguntas[i].alternativas[3], "Tigre");
            perguntas[i].resposta = 3;
        }

         // Pergunta 22
          else if (i ==21 ) {
            strcpy(perguntas[i].pergunta, "Qual é o metal mais utilizado na fabricação de automóveis?");
            strcpy(perguntas[i].alternativas[0], "Alumínio");
            strcpy(perguntas[i].alternativas[1], "Ferro");
            strcpy(perguntas[i].alternativas[2], "Aço");
            strcpy(perguntas[i].alternativas[3], "Cobre");
            perguntas[i].resposta =3 ;
        }


         // Pergunta 23
          else if (i == 22) {
            strcpy(perguntas[i].pergunta, "Qual destes países faz fronteira com o Brasil?");
            strcpy(perguntas[i].alternativas[0], "Equador");
            strcpy(perguntas[i].alternativas[1], "Chile");
            strcpy(perguntas[i].alternativas[2], "Argentina");
            strcpy(perguntas[i].alternativas[3], "México");
            perguntas[i].resposta = 3;
        }


         // Pergunta 24
          else if (i == 23) {
            strcpy(perguntas[i].pergunta, "Qual é a fórmula química da água?");
            strcpy(perguntas[i].alternativas[0], "H2O");
            strcpy(perguntas[i].alternativas[1], "CO2");
            strcpy(perguntas[i].alternativas[2], "NaCl");
            strcpy(perguntas[i].alternativas[3], "O2");
            perguntas[i].resposta = 1;
        }


         // Pergunta 25
          else if (i ==24 ) {
            strcpy(perguntas[i].pergunta, "Qual é o órgão responsável por bombear o sangue no corpo humano?");
            strcpy(perguntas[i].alternativas[0], "Pulmão");
            strcpy(perguntas[i].alternativas[1], "Coração");
            strcpy(perguntas[i].alternativas[2], "Fígado");
            strcpy(perguntas[i].alternativas[3], "Estômago");
            perguntas[i].resposta = 2;
        }


         // Pergunta 26
          else if (i == 25) {
            strcpy(perguntas[i].pergunta, "Qual destes países não faz parte da União Europeia?");
            strcpy(perguntas[i].alternativas[0], "Alemanha");
            strcpy(perguntas[i].alternativas[1], "Noruega");
            strcpy(perguntas[i].alternativas[2], "França");
            strcpy(perguntas[i].alternativas[3], "Itália");
            perguntas[i].resposta = 2;
        }


         // Pergunta 27
          else if (i == 26) {
            strcpy(perguntas[i].pergunta, "Qual é a montanha mais alta do mundo?");
            strcpy(perguntas[i].alternativas[0], "K2");
            strcpy(perguntas[i].alternativas[1], "Monte Everest");
            strcpy(perguntas[i].alternativas[2], "Kilimanjaro");
            strcpy(perguntas[i].alternativas[3], "Aconcágua");
            perguntas[i].resposta =2 ;
        }


         // Pergunta 28
          else if (i == 27) {
            strcpy(perguntas[i].pergunta, "O que Albert Einstein propôs com sua famosa equação E=mc²?");
            strcpy(perguntas[i].alternativas[0], "Teoria da Relatividade");
            strcpy(perguntas[i].alternativas[1], "Lei da Gravitação Universal");
            strcpy(perguntas[i].alternativas[2], "Mecânica Quântica");
            strcpy(perguntas[i].alternativas[3], "Evolução das Espécies");
            perguntas[i].resposta = 1;
        }


         // Pergunta 29
          else if (i ==28 ) {
            strcpy(perguntas[i].pergunta, "Quantos planetas compõem o Sistema Solar?");
            strcpy(perguntas[i].alternativas[0], "7");
            strcpy(perguntas[i].alternativas[1], "8");
            strcpy(perguntas[i].alternativas[2], "9");
            strcpy(perguntas[i].alternativas[3], "10");
            perguntas[i].resposta = 2;
        }


         // Pergunta 30
          else if (i ==29 ) {
            strcpy(perguntas[i].pergunta, "Quem descobriu o Brasil?");
            strcpy(perguntas[i].alternativas[0], "Cristóvão Colombo");
            strcpy(perguntas[i].alternativas[1], "Vasco da gama");
            strcpy(perguntas[i].alternativas[2], "Pedro Álvares Cabral");
            strcpy(perguntas[i].alternativas[3], "Fernão de Magalhães");
            perguntas[i].resposta = 2;
        }


         // Pergunta 31
          else if (i ==30) {
            strcpy(perguntas[i].pergunta, "Qual é o nome do maior deserto quente do mundo?");
            strcpy(perguntas[i].alternativas[0], "Atacama");
            strcpy(perguntas[i].alternativas[1], "Gobi");
            strcpy(perguntas[i].alternativas[2], "Kalahari");
            strcpy(perguntas[i].alternativas[3], "Saara");
            perguntas[i].resposta = 4;
        }

         // Pergunta 32
          else if (i == 31) {
            strcpy(perguntas[i].pergunta, "Qual é a moeda oficial do Japão?");
            strcpy(perguntas[i].alternativas[0], "Yuan");
            strcpy(perguntas[i].alternativas[1], "Dólar");
            strcpy(perguntas[i].alternativas[2], "Iene");
            strcpy(perguntas[i].alternativas[3], "Won");
            perguntas[i].resposta = 3;
        }


         // Pergunta 33
          else if (i == 32) {
            strcpy(perguntas[i].pergunta, "Qual país inventou o jogo de futebol?");
            strcpy(perguntas[i].alternativas[0], "França");
            strcpy(perguntas[i].alternativas[1], "Brasil");
            strcpy(perguntas[i].alternativas[2], "Inglaterra");
            strcpy(perguntas[i].alternativas[3], "Itália");
            perguntas[i].resposta =3;
        }


         // Pergunta 34
          else if (i == 33) {
            strcpy(perguntas[i].pergunta, "Qual é a maior espécie de felino?");
            strcpy(perguntas[i].alternativas[0], "Leão");
            strcpy(perguntas[i].alternativas[1], "Onça");
            strcpy(perguntas[i].alternativas[2], "Leopardo");
            strcpy(perguntas[i].alternativas[3], "Tigre");
            perguntas[i].resposta = 4;
        }


         // Pergunta 35
          else if (i == 34) {
            strcpy(perguntas[i].pergunta, "Qual é o gás mais abundante na atmosfera da Terra?");
            strcpy(perguntas[i].alternativas[0], "Oxigênio");
            strcpy(perguntas[i].alternativas[1], "Hidrogênio");
            strcpy(perguntas[i].alternativas[2], "Nitrogênio");
            strcpy(perguntas[i].alternativas[3], "Dióxido de carbono");
            perguntas[i].resposta = 3;
        }


         // Pergunta 36
          else if (i == 35) {
            strcpy(perguntas[i].pergunta, "Qual planeta é conhecido como o Planeta Vermelho?");
            strcpy(perguntas[i].alternativas[0], "Marte");
            strcpy(perguntas[i].alternativas[1], "Mercúrio");
            strcpy(perguntas[i].alternativas[2], "Vênus");
            strcpy(perguntas[i].alternativas[3], "Saturno");
            perguntas[i].resposta = 1;
        }


         // Pergunta 37
          else if (i == 36) {
            strcpy(perguntas[i].pergunta, "Em que cidade está localizada a sede da ONU?");
            strcpy(perguntas[i].alternativas[0], "Genebra");
            strcpy(perguntas[i].alternativas[1], "Washington");
            strcpy(perguntas[i].alternativas[2], "Nova York");
            strcpy(perguntas[i].alternativas[3], "Paris");
            perguntas[i].resposta = 3;
        }


         // Pergunta 38
          else if (i == 37) {
            strcpy(perguntas[i].pergunta, "Qual é o símbolo químico do ouro?");
            strcpy(perguntas[i].alternativas[0], "Ag");
            strcpy(perguntas[i].alternativas[1], "Gd");
            strcpy(perguntas[i].alternativas[2], "Pb");
            strcpy(perguntas[i].alternativas[3], "Au");
            perguntas[i].resposta = 4;
        }


         // Pergunta 39
          else if (i ==38 ) {
            strcpy(perguntas[i].pergunta, "Quantos metros há em uma milha?");
            strcpy(perguntas[i].alternativas[0], "103");
            strcpy(perguntas[i].alternativas[1], "1609");
            strcpy(perguntas[i].alternativas[2], "525");
            strcpy(perguntas[i].alternativas[3], "2013");
            perguntas[i].resposta = 2;
        }


         // Pergunta 40
          else if (i == 39) {
            strcpy(perguntas[i].pergunta, "Quem é o criador do personagem Sherlock Holmes?");
            strcpy(perguntas[i].alternativas[0], "Edgar Allan Poe");
            strcpy(perguntas[i].alternativas[1], "J.K. Rowling");
            strcpy(perguntas[i].alternativas[2], "Arthur Conan Doyle");
            strcpy(perguntas[i].alternativas[3], "Agatha Christie");
            perguntas[i].resposta = 3;
        }


         // Pergunta 41
          else if (i == 40) {
            strcpy(perguntas[i].pergunta, "Qual é o maior mamífero do mundo?");
            strcpy(perguntas[i].alternativas[0], "Elefante");
            strcpy(perguntas[i].alternativas[1], "Baleia-azul");
            strcpy(perguntas[i].alternativas[2], "Girafa");
            strcpy(perguntas[i].alternativas[3], "Hipopótamo");
            perguntas[i].resposta = 2;
        }

         // Pergunta 42
          else if (i == 41) {
            strcpy(perguntas[i].pergunta, "Qual é a capital da Austrália?");
            strcpy(perguntas[i].alternativas[0], "Sydney");
            strcpy(perguntas[i].alternativas[1], "Canberra");
            strcpy(perguntas[i].alternativas[2], "Melbourne");
            strcpy(perguntas[i].alternativas[3], "Brisbane");
            perguntas[i].resposta = 2;
        }


         // Pergunta 43
          else if (i == 42) {
            strcpy(perguntas[i].pergunta, "Qual destes países não faz parte da América do Norte?");
            strcpy(perguntas[i].alternativas[0], "Canadá");
            strcpy(perguntas[i].alternativas[1], "México");
            strcpy(perguntas[i].alternativas[2], "Japão");
            strcpy(perguntas[i].alternativas[3], "Estados Unidos");
            perguntas[i].resposta = 3;
        }


         // Pergunta 44
          else if (i == 43) {
            strcpy(perguntas[i].pergunta, "Qual foi o primeiro país a usar papel-moeda?");
            strcpy(perguntas[i].alternativas[0], "Índia");
            strcpy(perguntas[i].alternativas[1], "China");
            strcpy(perguntas[i].alternativas[2], "Egito");
            strcpy(perguntas[i].alternativas[3], "Japão");
            perguntas[i].resposta = 2;
        }


         // Pergunta 45
          else if (i == 44) {
            strcpy(perguntas[i].pergunta, "Qual é o nome do continente gelado no Polo Sul?");
            strcpy(perguntas[i].alternativas[0], "Ártico");
            strcpy(perguntas[i].alternativas[1], "América");
            strcpy(perguntas[i].alternativas[2], "Europa");
            strcpy(perguntas[i].alternativas[3], "Antártica");
            perguntas[i].resposta = 4;
        }


         // Pergunta 46
          else if (i ==45 ) {
            strcpy(perguntas[i].pergunta, "Qual é o maior país do mundo em área territorial?");
            strcpy(perguntas[i].alternativas[0], "China");
            strcpy(perguntas[i].alternativas[1], "Canadá");
            strcpy(perguntas[i].alternativas[2], "Rússia");
            strcpy(perguntas[i].alternativas[3], "Estados Unidos");
            perguntas[i].resposta = 3;
        }


         // Pergunta 47
          else if (i == 46) {
            strcpy(perguntas[i].pergunta, "O que significa a sigla ( www ) na internet?");
            strcpy(perguntas[i].alternativas[0], "World Web Wiki");
            strcpy(perguntas[i].alternativas[1], "World Wide Web");
            strcpy(perguntas[i].alternativas[2], "Web Wide World");
            strcpy(perguntas[i].alternativas[3], "Web World Wide");
            perguntas[i].resposta = 2;
        }


         // Pergunta 48
          else if (i == 47) {
            strcpy(perguntas[i].pergunta, "Qual o número atômico do hidrogênio?");
            strcpy(perguntas[i].alternativas[0], "2");
            strcpy(perguntas[i].alternativas[1], "1");
            strcpy(perguntas[i].alternativas[2], "8");
            strcpy(perguntas[i].alternativas[3], "10");
            perguntas[i].resposta = 2;
        }


         // Pergunta 49
          else if (i == 48) {
            strcpy(perguntas[i].pergunta, "Em que ano foi fundada a ONU?");
            strcpy(perguntas[i].alternativas[0], "1945");
            strcpy(perguntas[i].alternativas[1], "1918");
            strcpy(perguntas[i].alternativas[2], "1939");
            strcpy(perguntas[i].alternativas[3], "1963");
            perguntas[i].resposta = 1;
        }


         // Pergunta 50
          else if (i == 49) {
            strcpy(perguntas[i].pergunta, "Quem escreveu O Pequeno Príncipe?");
            strcpy(perguntas[i].alternativas[0], "Antoine de Saint-Exupéry");
            strcpy(perguntas[i].alternativas[1], "Júlio Verne");
            strcpy(perguntas[i].alternativas[2], "Gabriel García Márquez");
            strcpy(perguntas[i].alternativas[3], "Victor Hugo");
            perguntas[i].resposta = ;
        }

        // Pergunta: 51
        else if (i == 50) {
            strcpy(perguntas[i].pergunta, "Em que ano o Brasil ganhou sua primeira Copa do Mundo de futebol? ");
            strcpy(perguntas[i].alternativas[0], "1950 ");
            strcpy(perguntas[i].alternativas[1], "1954 ");
            strcpy(perguntas[i].alternativas[2], "1958 ");
            strcpy(perguntas[i].alternativas[3], "1962 ");
            perguntas[i].resposta = 2;
        }
        
        // Pergunta 52
        else if (i == 51) {
            strcpy(perguntas[i].pergunta, "Qual e o nome do rio mais longo do mundo? ");
            strcpy(perguntas[i].alternativas[0], "Rio Nilo");
            strcpy(perguntas[i].alternativas[1], "Rio Amazonas");
            strcpy(perguntas[i].alternativas[2], "Rio Yangtze");
            strcpy(perguntas[i].alternativas[3], "Rio Mississipi");
            perguntas[i].resposta = 0;
        }
        // Pergunta 53
        else if (i == 52) {
            strcpy(perguntas[i].pergunta, "Qual a velocidade da luz no vacuo?");
            strcpy(perguntas[i].alternativas[0], "150.000 km/s");
            strcpy(perguntas[i].alternativas[1], "300.000 km/s ");
            strcpy(perguntas[i].alternativas[2], "500.000 km/s ");
            strcpy(perguntas[i].alternativas[3], "100.000 km/s ");
            perguntas[i].resposta = 1;
        }
        // Pergunta 54
        else if (i == 53) {
            strcpy(perguntas[i].pergunta, "Quem foi o primeiro presidente dos Estados Unidos?");
            strcpy(perguntas[i].alternativas[0], "Abraham Lincoln");
            strcpy(perguntas[i].alternativas[1], "George Washington ");
            strcpy(perguntas[i].alternativas[2], "Thomas Jefferson ");
            strcpy(perguntas[i].alternativas[3], "John Adams ");
            perguntas[i].resposta =1;
        }
        // Pergunta 55
        else if (i == 54) {
            strcpy(perguntas[i].pergunta, "Qual e o nome cientifico dos seres humanos?");
            strcpy(perguntas[i].alternativas[0], "Homo erectus ");
            strcpy(perguntas[i].alternativas[1], "Homo habilis ");
            strcpy(perguntas[i].alternativas[2], "Homo sapiens ");
            strcpy(perguntas[i].alternativas[3], "Australopithecus ");
            perguntas[i].resposta = 2;
        }
        // Pergunta 56
        else if (i == 55) {
            strcpy(perguntas[i].pergunta, "Qual é o pais com o maior número de ilhas no mundo? ");
            strcpy(perguntas[i].alternativas[0], "Indonesia");
            strcpy(perguntas[i].alternativas[1], "Filipinas ");
            strcpy(perguntas[i].alternativas[2], "Suecia ");
            strcpy(perguntas[i].alternativas[3], "Japao ");
            perguntas[i].resposta = 2;
        }
        // Pergunta 57
        else if (i == 56) {
            strcpy(perguntas[i].pergunta, "Em que continente está localizada a maior parte do Egito? ");
            strcpy(perguntas[i].alternativas[0], "Europa ");
            strcpy(perguntas[i].alternativas[1], "Africa ");
            strcpy(perguntas[i].alternativas[2], "Asia ");
            strcpy(perguntas[i].alternativas[3], "America ");
            perguntas[i].resposta = 1;
        }
        // Pergunta 58
        else if (i == 57) {
            strcpy(perguntas[i].pergunta, "Qual foi o primeiro satelite artificial lançado ao espaço?");
            strcpy(perguntas[i].alternativas[0], "Apollo 11 ");
            strcpy(perguntas[i].alternativas[1], "Sputnik 1 ");
            strcpy(perguntas[i].alternativas[2], "Hubble ");
            strcpy(perguntas[i].alternativas[3], "Voyager 1 ");
            perguntas[i].resposta = 1;
        }
        // Pergunta 59
        else if (i == 58) {
            strcpy(perguntas[i].pergunta, "Qual destes animais é um mamifero?");
            strcpy(perguntas[i].alternativas[0], "Galinha ");
            strcpy(perguntas[i].alternativas[1], "Crocodilo ");
            strcpy(perguntas[i].alternativas[2], "Morcego ");
            strcpy(perguntas[i].alternativas[3], "Tubarão ");
            perguntas[i].resposta = 2;
        }
        // Pergunta 60
        else if (i == 59) {
            strcpy(perguntas[i].pergunta, "Qual desses números é um número primo?");
            strcpy(perguntas[i].alternativas[0], "12");
            strcpy(perguntas[i].alternativas[1], "15");
            strcpy(perguntas[i].alternativas[2], "17");
            strcpy(perguntas[i].alternativas[3], "21");
            perguntas[i].resposta = 2; // 17 (correta)
        }
        // Pergunta 61
        else if (i == 60) {
            strcpy(perguntas[i].pergunta, "Qual é a capital da Espanha?");
            strcpy(perguntas[i].alternativas[0], "Lisboa");
            strcpy(perguntas[i].alternativas[1], "Barcelona");
            strcpy(perguntas[i].alternativas[2], "Sevilha");
            strcpy(perguntas[i].alternativas[3], "Madri");
            perguntas[i].resposta = 3; // Madri (correta)
        }
        // Pergunta 62
        else if (i == 61) {
            strcpy(perguntas[i].pergunta, "Qual é o maior estado do Brasil em área territorial?");
            strcpy(perguntas[i].alternativas[0], "Amazonas");
            strcpy(perguntas[i].alternativas[1], "Pará");
            strcpy(perguntas[i].alternativas[2], "Mato Grosso");
            strcpy(perguntas[i].alternativas[3], "Bahia");
            perguntas[i].resposta = 0; // Amazonas (correta)
        }
        // Pergunta 63
        else if (i == 62) {
            strcpy(perguntas[i].pergunta, "Qual foi o último país a ganhar a Copa do Mundo de Futebol antes de 2022?");
            strcpy(perguntas[i].alternativas[0], "Brasil");
            strcpy(perguntas[i].alternativas[1], "Alemanha");
            strcpy(perguntas[i].alternativas[2], "França");
            strcpy(perguntas[i].alternativas[3], "Argentina");
            perguntas[i].resposta = 2; // França (correta)
        }
        // Pergunta 64
        else if (i == 63) {
            strcpy(perguntas[i].pergunta, "Qual desses cientistas desenvolveu a vacina contra a poliomielite?");
            strcpy(perguntas[i].alternativas[0], "Alexander Fleming");
            strcpy(perguntas[i].alternativas[1], "Jonas Salk");
            strcpy(perguntas[i].alternativas[2], "Louis Pasteur");
            strcpy(perguntas[i].alternativas[3], "Gregor Mendel");
            perguntas[i].resposta = 1; // Jonas Salk (correta)
        }
        // Pergunta 65
        else if (i == 64) {
            strcpy(perguntas[i].pergunta, "Quantos graus tem um triangulo equilatero?");
            strcpy(perguntas[i].alternativas[0], "45º");
            strcpy(perguntas[i].alternativas[1], "60º");
            strcpy(perguntas[i].alternativas[2], "90º");
            strcpy(perguntas[i].alternativas[3], "180º");
            perguntas[i].resposta = 3; // 180º (correta)
        }
        // Pergunta 66
        else if (i == 65) {
            strcpy(perguntas[i].pergunta, "Em que ano foi lançado o primeiro iPhone?");
            strcpy(perguntas[i].alternativas[0], "2005");
            strcpy(perguntas[i].alternativas[1], "2007");
            strcpy(perguntas[i].alternativas[2], "2010");
            strcpy(perguntas[i].alternativas[3], "2012");
            perguntas[i].resposta = 1; // 2007 (correta)
        }
        // Pergunta 67
        else if (i == 66) {
            strcpy(perguntas[i].pergunta, "Qual é o símbolo químico do Ferro?");
            strcpy(perguntas[i].alternativas[0], "F");
            strcpy(perguntas[i].alternativas[1], "Fe");
            strcpy(perguntas[i].alternativas[2], "Fr");
            strcpy(perguntas[i].alternativas[3], "Fi");
            perguntas[i].resposta = 1; // Fe (correta)
        }
        // Pergunta 68
        else if (i == 67) {
            strcpy(perguntas[i].pergunta, "Qual é a moeda oficial do Reino Unido?");
            strcpy(perguntas[i].alternativas[0], "Euro");
            strcpy(perguntas[i].alternativas[1], "Libra Esterlina");
            strcpy(perguntas[i].alternativas[2], "Dólar");
            strcpy(perguntas[i].alternativas[3], "Franco");
            perguntas[i].resposta = 1; // Libra Esterlina (correta)
        }
        // Pergunta 69
        else if (i == 68) {
            strcpy(perguntas[i].pergunta, "Qual é o animal mais venenoso do mundo?");
            strcpy(perguntas[i].alternativas[0], "Cobra-real");
            strcpy(perguntas[i].alternativas[1], "Peixe-pedra");
            strcpy(perguntas[i].alternativas[2], "Vespa-do-mar");
            strcpy(perguntas[i].alternativas[3], "Escorpião");
            perguntas[i].resposta = 2; // Vespa-do-mar (correta)
        }
        // Pergunta 70
        else if (i == 69) {
            strcpy(perguntas[i].pergunta, "Em qual oceano está localizado o Triângulo das Bermudas?");
            strcpy(perguntas[i].alternativas[0], "Oceano Índico");
            strcpy(perguntas[i].alternativas[1], "Oceano Atlântico");
            strcpy(perguntas[i].alternativas[2], "Oceano Pacífico");
            strcpy(perguntas[i].alternativas[3], "Oceano Ártico");
            perguntas[i].resposta = 1; // Oceano Atlântico (correta)
        }
        // Pergunta 71
        else if (i == 70) {
            strcpy(perguntas[i].pergunta, "Quantos anéis tem o planeta Saturno?");
            strcpy(perguntas[i].alternativas[0], "1");
            strcpy(perguntas[i].alternativas[1], "7");
            strcpy(perguntas[i].alternativas[2], "4");
            strcpy(perguntas[i].alternativas[3], "9");
            perguntas[i].resposta = 1; // 7 (correta)
        }
        // Pergunta 72
        else if (i == 71) {
            strcpy(perguntas[i].pergunta, "Qual é o maior órgão do corpo humano?");
            strcpy(perguntas[i].alternativas[0], "Pulmão");
            strcpy(perguntas[i].alternativas[1], "Coração");
            strcpy(perguntas[i].alternativas[2], "Fígado");
            strcpy(perguntas[i].alternativas[3], "Pele");
            perguntas[i].resposta = 3; // Pele (correta)
        }
        // Pergunta 73
        else if (i == 72) {
            strcpy(perguntas[i].pergunta, "Qual foi o país sede das Olimpíadas de 2016?");
            strcpy(perguntas[i].alternativas[0], "Londres");
            strcpy(perguntas[i].alternativas[1], "Tóquio");
            strcpy(perguntas[i].alternativas[2], "Rio de Janeiro");
            strcpy(perguntas[i].alternativas[3], "Pequim");
            perguntas[i].resposta = 2; // Rio de Janeiro (correta)
        }
        // Pergunta 74
        else if (i == 73) {
            strcpy(perguntas[i].pergunta, "Qual é o continente mais populoso do mundo?");
            strcpy(perguntas[i].alternativas[0], "Europa");
            strcpy(perguntas[i].alternativas[1], "África");
            strcpy(perguntas[i].alternativas[2], "Ásia");
            strcpy(perguntas[i].alternativas[3], "América do Norte");
            perguntas[i].resposta = 2; // Ásia (correta)
        }
        // Pergunta 75
        else if (i == 74) {
            strcpy(perguntas[i].pergunta, "Quem descobriu a Penicilina?");
            strcpy(perguntas[i].alternativas[0], "Marie Curie");
            strcpy(perguntas[i].alternativas[1], "Alexander Fleming");
            strcpy(perguntas[i].alternativas[2], "Isaac Newton");
            strcpy(perguntas[i].alternativas[3], "Gregor Mendel");
            perguntas[i].resposta = 1; // Alexander Fleming (correta)
        }
        
        // Pergunta 76
        else if (i == 75) {
            strcpy(perguntas[i].pergunta, "Qual foi a primeira mulher a ganhar um Prêmio Nobel?");
            strcpy(perguntas[i].alternativas[0], "Rosalind Franklin");
            strcpy(perguntas[i].alternativas[1], "Ada Lovelace");
            strcpy(perguntas[i].alternativas[2], "Marie Curie");
            strcpy(perguntas[i].alternativas[3], "Jane Goodall");
            perguntas[i].resposta = 2; // Marie Curie (correta)
        
        // Pergunta 77
        } else if (i == 76) {
            strcpy(perguntas[i].pergunta, "Qual é a altura média da Torre Eiffel?");
            strcpy(perguntas[i].alternativas[0], "200 metros");
            strcpy(perguntas[i].alternativas[1], "324 metros");
            strcpy(perguntas[i].alternativas[2], "400 metros");
            strcpy(perguntas[i].alternativas[3], "500 metros");
            perguntas[i].resposta = 1; // 324 metros (correta)
        
        // Pergunta 78
        } else if (i == 77) {
            strcpy(perguntas[i].pergunta, "Qual é o maior país da América do Sul?");
            strcpy(perguntas[i].alternativas[0], "Argentina");
            strcpy(perguntas[i].alternativas[1], "Chile");
            strcpy(perguntas[i].alternativas[2], "Brasil");
            strcpy(perguntas[i].alternativas[3], "Colômbia");
            perguntas[i].resposta = 2; // Brasil (correta)
        
        // Pergunta 79
        } else if (i == 78) {
            strcpy(perguntas[i].pergunta, "Qual é a capital do Canadá?");
            strcpy(perguntas[i].alternativas[0], "Vancouver");
            strcpy(perguntas[i].alternativas[1], "Ottawa");
            strcpy(perguntas[i].alternativas[2], "Toronto");
            strcpy(perguntas[i].alternativas[3], "Montreal");
            perguntas[i].resposta = 1; // Ottawa (correta)
        
        // Pergunta 80
        } else if (i == 79) {
            strcpy(perguntas[i].pergunta, "Qual desses instrumentos mede a pressão atmosférica?");
            strcpy(perguntas[i].alternativas[0], "Termômetro");
            strcpy(perguntas[i].alternativas[1], "Barômetro");
            strcpy(perguntas[i].alternativas[2], "Higrômetro");
            strcpy(perguntas[i].alternativas[3], "Altímetro");
            perguntas[i].resposta = 1; // Barômetro (correta)
        
        // Pergunta 81
        } else if (i == 80) {
            strcpy(perguntas[i].pergunta, "Quantos lados tem um octógono?");
            strcpy(perguntas[i].alternativas[0], "6");
            strcpy(perguntas[i].alternativas[1], "7");
            strcpy(perguntas[i].alternativas[2], "8");
            strcpy(perguntas[i].alternativas[3], "9");
            perguntas[i].resposta = 2; // 8 (correta)
        
        // Pergunta 82
        } else if (i == 81) {
            strcpy(perguntas[i].pergunta, "Qual é o gás utilizado em balões de festa para que eles flutuem?");
            strcpy(perguntas[i].alternativas[0], "Oxigênio");
            strcpy(perguntas[i].alternativas[1], "Hélio");
            strcpy(perguntas[i].alternativas[2], "Hidrogênio");
            strcpy(perguntas[i].alternativas[3], "Dióxido de carbono");
            perguntas[i].resposta = 1; // Hélio (correta)
        
        // Pergunta 83
        } else if (i == 82) {
            strcpy(perguntas[i].pergunta, "Em que continente está localizada a Austrália?");
            strcpy(perguntas[i].alternativas[0], "América do Sul");
            strcpy(perguntas[i].alternativas[1], "África");
            strcpy(perguntas[i].alternativas[2], "Oceania");
            strcpy(perguntas[i].alternativas[3], "Europa");
            perguntas[i].resposta = 2; // Oceania (correta)
        
        // Pergunta 84
        } else if (i == 83) {
            strcpy(perguntas[i].pergunta, "Quem escreveu \"Hamlet\"?");
            strcpy(perguntas[i].alternativas[0], "Dante Alighieri");
            strcpy(perguntas[i].alternativas[1], "William Shakespeare");
            strcpy(perguntas[i].alternativas[2], "Victor Hugo");
            strcpy(perguntas[i].alternativas[3], "Franz Kafka");
            perguntas[i].resposta = 1; // William Shakespeare (correta)
        
        // Pergunta 85
        } else if (i == 84) {
            strcpy(perguntas[i].pergunta, "Qual desses países não está localizado na América do Sul?");
            strcpy(perguntas[i].alternativas[0], "Uruguai");
            strcpy(perguntas[i].alternativas[1], "Chile");
            strcpy(perguntas[i].alternativas[2], "Peru");
            strcpy(perguntas[i].alternativas[3], "México");
            perguntas[i].resposta = 3; // México (correta)
        
        // Pergunta 86
        } else if (i == 85) {
            strcpy(perguntas[i].pergunta, "Qual é a camada mais externa da Terra?");
            strcpy(perguntas[i].alternativas[0], "Manto");
            strcpy(perguntas[i].alternativas[1], "Núcleo");
            strcpy(perguntas[i].alternativas[2], "Crosta");
            strcpy(perguntas[i].alternativas[3], "Litosfera");
            perguntas[i].resposta = 2; // Crosta (correta)
        
        // Pergunta 87
        } else if (i == 86) {
            strcpy(perguntas[i].pergunta, "Quem foi o líder dos nazistas durante a Segunda Guerra Mundial?");
            strcpy(perguntas[i].alternativas[0], "Benito Mussolini");
            strcpy(perguntas[i].alternativas[1], "Adolf Hitler");
            strcpy(perguntas[i].alternativas[2], "Joseph Stalin");
            strcpy(perguntas[i].alternativas[3], "Francisco Franco");
            perguntas[i].resposta = 1; // Adolf Hitler (correta)
        
        // Pergunta 88
        } else if (i == 87) {
            strcpy(perguntas[i].pergunta, "Em que ano o Brasil proclamou sua independência de Portugal?");
            strcpy(perguntas[i].alternativas[0], "1889");
            strcpy(perguntas[i].alternativas[1], "1822");
            strcpy(perguntas[i].alternativas[2], "1808");
            strcpy(perguntas[i].alternativas[3], "1830");
            perguntas[i].resposta = 1; // 1822 (correta)
        
        // Pergunta 89
        } else if (i == 88) {
            strcpy(perguntas[i].pergunta, "O que a sigla \"ADN\" representa em português?");
            strcpy(perguntas[i].alternativas[0], "Ácido desoxirribonucleico");
            strcpy(perguntas[i].alternativas[1], "Ácido ribonucleico");
            strcpy(perguntas[i].alternativas[2], "Adenosina");
            strcpy(perguntas[i].alternativas[3], "DNA");
            perguntas[i].resposta = 0; // Ácido desoxirribonucleico (correta)
        
        // Pergunta 90
        } else if (i == 89) {
            strcpy(perguntas[i].pergunta, "Qual desses é um planeta anão?");
            strcpy(perguntas[i].alternativas[0], "Júpiter");
            strcpy(perguntas[i].alternativas[1], "Netuno");
            strcpy(perguntas[i].alternativas[2], "Plutão");
            strcpy(perguntas[i].alternativas[3], "Urano");
            perguntas[i].resposta = 2; // Plutão (correta)
        
        // Pergunta 91
        } else if (i == 90) {
            strcpy(perguntas[i].pergunta, "Qual foi o primeiro país a industrializar-se?");
            strcpy(perguntas[i].alternativas[0], "França");
            strcpy(perguntas[i].alternativas[1], "Alemanha");
            strcpy(perguntas[i].alternativas[2], "Estados Unidos");
            strcpy(perguntas[i].alternativas[3], "Inglaterra");
            perguntas[i].resposta = 3; // Inglaterra (correta)
        
        // Pergunta 92
        } else if (i == 91) {
            strcpy(perguntas[i].pergunta, "Qual é o nome da galáxia em que o Sistema Solar está localizado?");
            strcpy(perguntas[i].alternativas[0], "Via Láctea");
            strcpy(perguntas[i].alternativas[1], "Andrômeda");
            strcpy(perguntas[i].alternativas[2], "Galáxia do Sombrero");
            strcpy(perguntas[i].alternativas[3], "Galáxia Triangular");
            perguntas[i].resposta = 0; // Via Láctea (correta)
        
        // Pergunta 93
        } else if (i == 92) {
            strcpy(perguntas[i].pergunta, "Qual desses animais é conhecido por sua capacidade de camuflagem?");
            strcpy(perguntas[i].alternativas[0], "Polvo");
            strcpy(perguntas[i].alternativas[1], "Golfinho");
            strcpy(perguntas[i].alternativas[2], "Gato");
            strcpy(perguntas[i].alternativas[3], "Urso");
            perguntas[i].resposta = 0; // Polvo (correta)
        
        // Pergunta 94
        } else if (i == 93) {
            strcpy(perguntas[i].pergunta, "Qual foi a última rainha da França antes da Revolução Francesa?");
            strcpy(perguntas[i].alternativas[0], "Catarina de Médici");
            strcpy(perguntas[i].alternativas[1], "Maria Antonieta");
            strcpy(perguntas[i].alternativas[2], "Isabel II");
            strcpy(perguntas[i].alternativas[3], "Joana D'Arc");
            perguntas[i].resposta = 1; // Maria Antonieta (correta)
        
        // Pergunta 95
        } else if (i == 94) {
            strcpy(perguntas[i].pergunta, "Quem pintou o teto da Capela Sistina?");
            strcpy(perguntas[i].alternativas[0], "Leonardo da Vinci");
            strcpy(perguntas[i].alternativas[1], "Michelangelo");
            strcpy(perguntas[i].alternativas[2], "Rafael");
            strcpy(perguntas[i].alternativas[3], "Donatello");
            perguntas[i].resposta = 1; // Michelangelo (correta)
        }
        
        //Pergunta 96
        else if (i == 95) {
            strcpy(perguntas[i].pergunta,"Qual é o animal símbolo da WWF (Fundo Mundial para a Natureza)?");
            strcpy(perguntas[i].alternativas[0], "Tigre");
            strcpy(perguntas[i].alternativas[1], "Elefante");
            strcpy(perguntas[i].alternativas[2], "Panda ");
            strcpy(perguntas[i].alternativas[3], "leao ");
            perguntas[i].resposta = 2;
        }
        
        //Pergunta 97
        else if (i == 96) {
            strcpy(perguntas[i].pergunta,"" );
            strcpy(perguntas[i].alternativas[0], " ");
            strcpy(perguntas[i].alternativas[1], " ");
            strcpy(perguntas[i].alternativas[2], " ");
            strcpy(perguntas[i].alternativas[3], " ");
            perguntas[i].resposta = ;
        }
        
        
        //Pergunta 98
        else if (i == 97) {
            strcpy(perguntas[i].pergunta, );
            strcpy(perguntas[i].alternativas[0], " ");
            strcpy(perguntas[i].alternativas[1], " ");
            strcpy(perguntas[i].alternativas[2], " ");
            strcpy(perguntas[i].alternativas[3], " ");
            perguntas[i].resposta = ;
        }




        



        // Escrever pergunta no arquivo
        fwrite(&perguntas[i], sizeof(Pergunta), 1, arquivo_perguntas);

@@ -84,3 +571,15 @@ int main() {
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


