//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

int remove_lista_inicio(Lista* li){
    if (lista_vazia(li))
        return 0;

    Elem *no = li->inicio;
    li->inicio = no->prox;
    free(no);

    if(li->inicio == NULL)
        li->final = NULL;
    li->qtd--;

    return 1;
}

int remove_lista_final(Lista* li){
    if (lista_vazia(li))
        return 0;

    Elem *ant, *no = li->inicio;

    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }

    if(no == li->inicio){ //remover o primeiro?
        li->inicio = NULL;
        li->final = NULL;
    } else {
        ant->prox = no->prox;
        li->final = ant;
    }
    free(no);
    li->qtd--;

    return 1;
}
