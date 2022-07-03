//Arquivo infos.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

Pilha* cria_pilha(){
    Pilha *pi;
    pi = (Pilha*) malloc(sizeof(struct pilha));

    if(pi != NULL)
        pi->qtd = 0;

    return pi;
}

void libera_pilha(Pilha* pi){
    free(pi);
}

int tamanho_pilha(Pilha* pi){
    if(pi == NULL){
    	printf("\nPilha invalida\n");
    	return -1;
    }
    else {
        return pi->qtd;
    }
}

int pilha_cheia(Pilha* pi){
    if(pi == NULL){
    	printf("\nPilha invalida\n");
    	return 0;
    }

    if (pi->qtd == MAX){
    	printf("\Pilha Cheia\n");
    	return (pi->qtd == MAX);
    }
    return 1;
}

int pilha_vazia(Pilha* pi){
    if(pi == NULL){
    	printf("\nPilha Invalida\n");
    	return 0;
    }

    if (pi->qtd == 0){
    	printf("\nLista Vazia\n");
    	return (pi->qtd == 0);
    }
    return 1;
}
