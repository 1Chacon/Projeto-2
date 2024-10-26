#include <stdio.h>
#include "projeto2.h"

int main() {
    int opcao;

    do {
        printf("--------------------------------------------------------- \n");
        printf("\nBem-vindo ao Jogo de Perguntas!\n");
        printf("1. Jogar\n");
        printf("2. Exibir Tutorial\n");
        printf("3. Exibir Placar\n");
        printf("4. Adicionar Pergunta\n");
        printf("5. Remover Pergunta\n");
        printf("6. Adicionar Jogador\n");
        printf("7. Remover Jogador\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                jogar();
                break;
            case 2:
                exibir_tutorial();
                break;
            case 3:
                exibir_placar();
                break;
            case 4:
                add_pergunta();
                break;
            case 5:
                remov_pergunta();
                break;
            case 6:
                add_jogador();
                break;
            case 7:
                remov_jogador();
                break;
            case 0:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
