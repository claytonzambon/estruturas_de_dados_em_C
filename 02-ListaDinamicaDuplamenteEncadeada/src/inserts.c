//Arquivo inserts.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da funcao insere_lista_inicio
void insere_lista_inicio(Lista* li, struct aluno al){

    al = informar_dados_aluno();

    Elem* no;
    no = (Elem*)malloc(sizeof(Elem));

    no->dados = al;
    no->prox = (*li);
    no->ant = NULL;

    if(*li != NULL)//lista não vazia: apontar para o anterior!
        (*li)->ant = no;

    *li = no;

    msg_inserido_com_sucesso();
}

//Implementação da funcao insere_lista_final
void insere_lista_final(Lista* li, struct aluno al){

    al = informar_dados_aluno(); //mensagens.c

    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));

    no->dados = al;
    no->prox = NULL;

    if((*li) == NULL){//lista vazia: insere início
        no->ant = NULL;
        *li = no;
    } else {
        Elem *aux;
        aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
        no->ant = aux;
    }

    msg_inserido_com_sucesso();
}

//Implementação da funcao insere_lista_ordenada
void insere_lista_ordenada(Lista* li, struct aluno al){

    al = informar_dados_aluno();

    Elem *no = (Elem*) malloc(sizeof(Elem));

    no->dados = al;

    if((*li) == NULL){//lista vazia: insere início
        no->prox = NULL;
        no->ant = NULL;
        *li = no;
    } else {  //Procurar onde inserir
        Elem *ante, *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula){
            ante = atual;
            atual = atual->prox;
        }
        if(atual == *li){//insere início
            no->ant = NULL;
            (*li)->ant = no;
            no->prox = (*li);
            *li = no;
        } else {
            no->prox = ante->prox;
            no->ant = ante;
            ante->prox = no;
            if(atual != NULL)
                atual->ant = no;
        }
        msg_inserido_com_sucesso();
    }
}
