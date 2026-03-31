#include "pilha.h"
int main () {

    t_pilha p1;

    int capacidade;
    printf("digite a capacidade da pilha:  ");
    scanf ("%d", &capacidade);
    constroi_pilha(capacidade, &p1);
    printf ("Pilha foi construída.");
    mostra_pilha (&p1);
    empilha(10, &p1);
    empilha(20, &p1);
    empilha(30, &p1);
    printf("Pilha depois dos empilhamentos:\n");
    mostra_pilha(&p1);
    int saiu;
    desempilha (&p1, &saiu);
    printf ("%d foi desempilhado.\n", saiu);
    mostra_pilha(&p1);

    return 0;
}