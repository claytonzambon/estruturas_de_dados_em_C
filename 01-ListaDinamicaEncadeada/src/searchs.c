//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Prot�tipos

//Implementa��o da Fun��o consulta_lista_pos
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
	lista_vazia(li);

    Elem *no = *li;
    int i = 1;
    while(no != NULL && i < pos){
        no = no->prox;
        i++;
    }
    if(no == NULL)
    {
    	printf("\nPosicao Nao encontrada\n");
        return 0;
    }
    else{
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        return 1;
    }
}

//Implementa��o da Fun��o consulta_lista_mat
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
	lista_vazia(li);

    Elem *no = *li;
    while(no != NULL && no->dados.matricula != mat){
        no = no->prox;
    }
    if(no == NULL){
    	printf("\nMatricula nao encontrada\n");
        return 0;
    }
    else{
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        return 1;
    }
}

//Implementa��o da Fun��o imprime_lista
void imprime_lista(Lista* li){
	lista_vazia(li);

    Elem* no = *li;
    while(no != NULL){
        exibe_consulta(no); //mensagens.c
        no = no->prox;
    }
}
