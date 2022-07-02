//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//=================================================
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
	lista_vazia(li);

    if(pos <= 0)
        return 0;

    Elem *no = li->inicio;//primeiro elemento
    int i = 1;

    while(no != NULL && i < pos){
        no = no->prox;
        i++;
    }

    if(no == NULL){
    	printf("\nPosicao Nao encontrada\n"); //mensagens.c
        return 0;
    } else {
        *al = no->dados;
        exibe_consulta(al);
        return 1;
    }
}

int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
	lista_vazia(li);

    Elem *no = li->inicio;

    while(no != NULL && no->dados.matricula != mat)
        no = no->prox;

    if(no == NULL){
    	printf("\nMatricula nao encontrada\n"); //mensagens.c
        return 0;
    } else {
        *al = no->dados;
        exibe_consulta(al);
        return 1;
    }
}

//Implementação da funcao imprime_lista
void imprime_lista(Lista* li, struct aluno *al){

	lista_vazia(li);

	Elem* no = li->inicio;
    while(no != NULL){
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        no = no->prox;
    }
}
