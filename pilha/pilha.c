#include "pilha.h"

void constroi_pilha (int capacidade, t_pilha *p){
    p->topo = 0;
    p->v = (int *) malloc (sizeof(int) * capacidade);
    p->capacidade = capacidade;
}
int tamanho (t_pilha *p){
     return p->topo;
}
int pilha_vazia (t_pilha *p){
    if (p->topo == 0){
        return 1;
    }
    return 0;
    //return (!p->topo == 0); 0 = falso, entregar a negação do topo, ou seja negação do vazio
    //return (!p->topo)  
    //return p->topo == 0 ? 1 : 0;
    //return p->topo ? 0 : 1;
}
int pilha_cheia (t_pilha *p){
    return p->capacidade == p->topo;
}
int empilha (int e, t_pilha *p){
    if(pilha_cheia(p)){ 
        return FRACASSO;
    }
    p->v[p->topo] = e;
    p->topo++;
    return SUCESSO;
}
int desempilha (t_pilha *p, int *desempilhado){
    if(pilha_vazia(p)) {
        return FRACASSO;
    }
        //p->topo--;
    *desempilhado = p->v[--p->topo];
    return SUCESSO;
    }

void mostra_pilha (t_pilha *p){
    if (pilha_vazia(p)) {
        printf ("Pilha vazia\n");
    }
    else {
        for (int i = p->topo - 1; i >= 0; i--){
            printf ("%d ", p-> v[i]);
        }
        printf ("\n");
    }
}