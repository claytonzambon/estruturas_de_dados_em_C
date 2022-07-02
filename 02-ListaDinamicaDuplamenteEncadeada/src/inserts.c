//Arquivo inserts.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

st_aluno informar_dados_aluno(){
	st_aluno al;
    printf("Digite a Matricula: ");
    scanf("%d", &al.matricula);
    printf("Digite o nome: ");
    scanf("%s", al.nome);
    printf("Digite a Nota 01: ");
    scanf("%f", &al.n1);
    printf("Digite a Nota 02: ");
    scanf("%f", &al.n2);
    printf("Digite a Nota 03: ");
    scanf("%f", &al.n3);
    return al;
}

//Implementação da funcao insere_lista_inicio
int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    al = informar_dados_aluno();

    Elem* no;
    no = (Elem*)malloc(sizeof(Elem));

    if(no == NULL) {
        return 0;
    }

    no->dados = al;
    no->prox = (*li);
    no->ant = NULL;

    if(*li != NULL)//lista não vazia: apontar para o anterior!
        (*li)->ant = no;

    *li = no;

    return 1;
}

//Implementação da funcao insere_lista_final
int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    al = informar_dados_aluno();

    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));

    if(no == NULL) {
        return 0;
    }

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

    return 1;
}

//Implementação da funcao insere_lista_ordenada
int insere_lista_ordenada(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    al = informar_dados_aluno();

    Elem *no = (Elem*) malloc(sizeof(Elem));

    if(no == NULL) {
        return 0;
    }

    no->dados = al;

    if((*li) == NULL){//lista vazia: insere início
        no->prox = NULL;
        no->ant = NULL;
        *li = no;
        return 1;
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
        return 1;
    }
}
