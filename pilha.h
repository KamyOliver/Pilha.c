#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 1
#define FRACASSO 0
typedef struct pilha{
    int *v;
    int topo;
    int capacidade;
} t_pilha;
void constroi_pilha (int capacidade, t_pilha *p);
int empilha (int e, t_pilha *p);
int desempilha (t_pilha *p, int *desempilhado);
int tamanho (t_pilha *p);
int vazia (t_pilha *p);
int cheia (t_pilha *p);
void mostra_pilha (t_pilha *p);