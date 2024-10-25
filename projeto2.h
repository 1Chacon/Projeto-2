#ifndef Projeto2_h
#define projeto2_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PERGUNTAS 100
#define MAX_RESPOSTAS 4
#define MAX_NOME 50
#define MAX_PONTUACAO 20
#define MAX_JOGADORES 100

typedef struct {
    char pergunta[200];
    char alternativas[MAX_RESPOSTAS][50];
    int resposta;
} Pergunta;

typedef struct {
    char nome[MAX_NOME];
    int pontuacao;
} Jogador;

// Funções do projeto
void jogar();
void exibir_tutorial();
void exibir_placar();
void add_pergunta();
void remov_pergunta();
void add_jogador();
void remov_jogador();

#endif // PROJETO2_H
