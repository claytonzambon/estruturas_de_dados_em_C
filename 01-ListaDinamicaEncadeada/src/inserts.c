//Arquivo inserts.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da Função insere_lista_inicio
void insere_lista_inicio(Lista* li, struct aluno al){

    al = informar_dados_aluno(); //mensagens.c

    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    no->dados = al;
    no->prox = (*li);
    *li = no;
    msg_inserido_com_sucesso();
}
//Implementação da Função insere_lista_final
void insere_lista_final(Lista* li, struct aluno al){

    al = informar_dados_aluno(); //mensagens.c

    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));

    no->dados = al;
    no->prox = NULL;

    if((*li) == NULL){//lista vazia: insere início
        *li = no;
    } else {
        Elem *aux;
        aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    msg_inserido_com_sucesso();
}
//Implementação da Função insere_lista_ordenada
void insere_lista_ordenada(Lista* li, struct aluno al){

    al = informar_dados_aluno(); //mensagens.c

    Elem *no = (Elem*) malloc(sizeof(Elem));

    no->dados = al;
    if((*li) == NULL){//lista vazia: insere início
        no->prox = NULL;
        *li = no;
    } else { //Procura onde inserir
        Elem *ant, *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){//insere início
            no->prox = (*li);
            *li = no;
        } else {
            no->prox = atual;
            ant->prox = no;
        }
    }
    msg_inserido_com_sucesso();
}
