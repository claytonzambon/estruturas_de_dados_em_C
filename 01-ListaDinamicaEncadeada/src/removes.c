//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da Função remove_lista_inicio
int remove_lista_inicio(Lista* li){
    if (lista_vazia(li))
        return 0;

    Elem *no = *li;
    *li = no->prox;
    free(no);
    return 1;
}

//Implementação da Função remove_lista_final
int remove_lista_final(Lista* li){
    if (lista_vazia(li))
        return 0;

    Elem *ant, *no = *li;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }

    if(no == (*li)) { //remover o primeiro?
        *li = no->prox;

    } else {
        ant->prox = no->prox;

    }
    free(no);
    return 1;
}

//Implementação da Função remove_lista
int remove_lista(Lista* li, int mat){
    if (lista_vazia(li))
        return 0;

    Elem *ant, *no = *li;
    while(no != NULL && no->dados.matricula != mat){
        ant = no;
        no = no->prox;
    }
    if(no == NULL){ //não encontrado
    	printf("\nMatricula >>%d<< nao encontrada \n", mat);
        return 0;
    }

    if(no == *li){ //remover o primeiro?
        *li = no->prox;
        printf("\nRemovida a matricula >>%d<< da lista", mat);
    } else {
        ant->prox = no->prox;
        printf("\nRemovida a matricula >>%d<< da lista", mat);
    }
    free(no);
    return 1;
}
