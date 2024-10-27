# Projeto-2

Igor Eizo Ramos Kanazawa| RA: 24.124.040-7
Rodrigo Inoue Castanho | RA: 24.124.037-3
WILSON MASSAIOLLI CHACON | RA: 24.124.038-1

============================================================================
Este projeto é um jogo de quiz em linguagem C jogado no terminal. Ele foi projetado para desafiar o jogador com 20 de 100 perguntas de múltipla escolha. Com um sistema de pontuação e um menu interativo, o jogo permite que o jogador teste seus conhecimentos e concorra para ficar entre os 10 melhores jogadores.

Descrição do Jogo:

O jogo é composto de:

-20 Perguntas: Cada pergunta possui 4 alternativas numeradas (1 a 4), mas apenas uma delas é a correta.

Jogabilidade: O jogador insere seu nome no início para ser adicioado ao placar. Apos isso o jogo seleciona 20 perguntas de forma aleatoria de nosso repositorio e as exibe ao jogador jundo de 4 aalternativas e solicita a alternativa correta ao usuario.

-Caso acerte, ele avança para a próxima pergunta.

-Caso erre, o jogo é finalizado, e o nome do jogador e sua pontuacao sao adicionados ao placar.

Menu Principal==============================================================================

O jogo possui um menu principal, onde é possível realizar as seguintes ações:

-1. Jogar: O jogador insere o nome e começa o jogo.
A funcao jogar abre o arquivo binario com as perguntas, alternativas e a resposta de cada pergunta, le todos este dados e os salva na memoria de forma temporaria. Apos isso ele separa todas as perguntas de forma aleatoria em 5 arrays, cada um contendo 20 perguntas. Um numero de 0 a 4 é gerado para selecionar qual do arrays 5 sera exibido ao jogador. O pragrama solicita o nome do jogador para ser adicionado ao placar e apos este ser incerido o jogo comeca. As perguntas e alternativas dentro do array serao exibidas ao usuario que deve digitar qual das 4 alternativaas ele acha que é a correta. Se a resposta estiver correta a proxima pergunnta é exibida e o jogador ganha 1 ponto,com o placar minimo sendo 0 e maximo 20, se a resposta estiver incorreta o jogo termina, exibe a pontuacao para o jogador e salva ela jundo do nome no arquivo de texto que contem os nomes e pontuacoes dos jogadores.

-2. Tutorial: O progama exibe um tutorial explicando como o joga funciona e exibe um exemplo para o jogador.
A funcao exibir_tutorial ira abrir e ler um arquivo de texto que contem o tutorial, que em seguida sera exibido ao jogador.

-3. Placar: Exibe o placar com o nome e pontuaacao dos 10 melhores jagadores.
A funcao exibir_placar ira abir e ler os dados de um aruivo dde texto que contem o nome e pontuacao de todos os jogadores. Em seguida ele ira organizar os jogadores em ordem da maior pontuacao para a menor e exibir os top 10 jogadores e sua pontuacao.

-4. Editar Dados:

-5. Sair:

-Gerenciamento de Perguntas: É possível selecionar uma pergunta para remover, facilitando ajustes no banco de perguntas.

-Gerenciamento de Jogadores: O sistema armazena até 10 jogadores.

-Adiciona novos jogadores à lista.

-Substitui o jogador com menos pontos caso o limite de 10 jogadores seja atingido.

-Exibe mensagem de "jogador não encontrado" caso uma busca seja feita sem sucesso.
===============================================================================================

Regras do Jogo:


O jogo consiste em responder corretamente a todas as 100 perguntas para vencer. Ao errar uma pergunta, o jogo termina e retorna ao início.

O sistema de jogadores mantém um ranking com pontuação, removendo o jogador de menor pontuação caso o limite seja atingido e substituindo pelo novo jogador com melhor desempenho.

==================================================================================================

Requisitos do Sistema:

Para compilar e executar o jogo, você precisará de:

Compilador C (como GCC)


Sistema que suporte um terminal para rodar o programa como por exemplo: vscode

