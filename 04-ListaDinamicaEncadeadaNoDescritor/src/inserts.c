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

    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));

    if(no == NULL) {
        return 0;
    }

    no->dados = al;
    no->prox = li->inicio;

    if(li->inicio == NULL)
        li->final = no;
    li->inicio = no;
    li->qtd++;

    return 1;
}

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

    if(li->inicio == NULL)//lista vazia: insere início
        li->inicio = no;
    else
        li->final->prox = no;

    li->final = no;
    li->qtd++;

    return 1;
}
