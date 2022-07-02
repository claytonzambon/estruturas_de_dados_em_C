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

int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    al = informar_dados_aluno();

    Elem *no = (Elem*) malloc(sizeof(Elem));

    if(no == NULL) {
        return 0;
    }

    no->dados = al;
    if((*li) == NULL){//lista vazia: insere início
        *li = no;
        no->prox = no;
    }else{
        Elem *aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = no;
        no->prox = *li;
        *li = no;
    }

    return 1;
}

int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    al = informar_dados_aluno();

    Elem *no = (Elem*) malloc(sizeof(Elem));

    if(no == NULL) {
        return 0;
    }
    no->dados = al;

    if((*li) == NULL){//lista vazia: insere início
        *li = no;
        no->prox = no;
    }else{
        Elem *aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = no;
        no->prox = *li;
    }

    return 1;
}

int insere_lista_ordenada(Lista* li, struct aluno al){//TERMINAR
    if(li == NULL)
        return 0;

    al = informar_dados_aluno();

    Elem *no = (Elem*) malloc(sizeof(Elem));

    if(no == NULL) {
        return 0;
    }
    no->dados = al;

    if((*li) == NULL){//insere início
        *li = no;
        no->prox = no;
        return 1;
    } else {
        if((*li)->dados.matricula > al.matricula){//insere início
            Elem *atual = *li;
            while(atual->prox != (*li))//procura o último
                atual = atual->prox;
            no->prox = *li;
            atual->prox = no;
            *li = no;
            return 1;
        }
        Elem *ant = *li, *atual = (*li)->prox;
        while(atual != (*li) && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual->prox;
        }
        ant->prox = no;
        no->prox = atual;
        return 1;
    }
}
