//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

int remove_lista_inicio(Lista* li){
    if (lista_vazia(li))
        return 0;

    if((*li) == (*li)->prox){//lista fica vazia
        free(*li);
        *li = NULL;
        return 1;
    }

    Elem *atual = *li;

    while(atual->prox != (*li))//procura o último
        atual = atual->prox;

    Elem *no = *li;
    atual->prox = no->prox;
    *li = no->prox;
    free(no);
    return 1;
}

int remove_lista_final(Lista* li){
    if (lista_vazia(li))
        return 0;

    if((*li) == (*li)->prox){//lista fica vaza
        free(*li);
        *li = NULL;
        return 1;
    }
    Elem *ant, *no = *li;

    while(no->prox != (*li)){//procura o último
        ant = no;
        no = no->prox;
    }
    ant->prox = no->prox;
    free(no);
    return 1;
}

int remove_lista(Lista* li, int mat){
    if (lista_vazia(li))
        return 0;

    Elem *no = *li;

    if(no->dados.matricula == mat){//remover do início
        if(no == no->prox){//lista fica vaza
            free(no);
            *li = NULL;
            printf("\nRemovida a matricula >>%d<< da lista", mat); //mensagens.c
            return 1;
        } else {
            Elem *ult = *li;
            while(ult->prox != (*li))//procura o último
                ult = ult->prox;
            ult->prox = (*li)->prox;
            *li = (*li)->prox;
            free(no);
            printf("\nRemovida a matricula >>%d<< da lista", mat); //mensagens.c
            return 1;
        }
    }
    Elem *ant = no;
    no = no->prox;
    while(no != (*li) && no->dados.matricula != mat){
        ant = no;
        no = no->prox;
    }
    if(no == *li){//não encontrado
    	printf("\nMatricula >>%d<< nao encontrada \n", mat); //mensagens.c
        return 0;
    }

    ant->prox = no->prox;
    free(no);
    printf("\nRemovida a matricula >>%d<< da lista", mat); //mensagens.c
    return 1;
}
