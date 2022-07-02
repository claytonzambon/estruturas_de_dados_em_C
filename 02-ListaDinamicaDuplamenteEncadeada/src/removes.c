//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da funcao remove_lista_inicio
int remove_lista_inicio(Lista* li){

    if (lista_vazia(li))
        return 0;

    Elem *no = *li;
    *li = no->prox;

    if(no->prox != NULL)
        no->prox->ant = NULL;

    free(no);
    return 1;
}
//Implementação da funcao remove_lista_final
int remove_lista_final(Lista* li){

    if (lista_vazia(li))
        return 0;

    Elem *no = *li;

    while(no->prox != NULL)
        no = no->prox;

    if(no->ant == NULL)//remover o primeiro e único
        *li = no->prox;
    else
        no->ant->prox = NULL;

    free(no);

    return 1;
}
//Implementação da funcao remove_lista
int remove_lista(Lista* li, int mat){

    if (lista_vazia(li))
        return 0;

    Elem *no = *li;

    while(no != NULL && no->dados.matricula != mat){
        no = no->prox;
    }

    if(no == NULL){//não encontrado
    	printf("\nMatricula >>%d<< nao encontrada \n", mat); //mensagens.c
        return 0;
    }

    if(no->ant == NULL)//remover o primeiro?
        *li = no->prox;
    else
        no->ant->prox = no->prox;

    if(no->prox != NULL)//não é o último?
        no->prox->ant = no->ant;

    free(no);
    printf("\nRemovida a matricula >>%d<< da lista", mat); //mensagens.c
    return 1;
}
