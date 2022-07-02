//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
    if(li == NULL || (*li) == NULL || pos <= 0)
        return 0;
    Elem *no = *li;
    int i = 1;
    while(no->prox != (*li) && i < pos){
        no = no->prox;
        i++;
    }
    if(i != pos){
    	printf("\nPosicao Nao encontrada\n"); //mensagens.c
        return 0;
    }
    else{
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        return 1;
    }
}

int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
    if(li == NULL || (*li) == NULL)
        return 0;
    Elem *no = *li;
    while(no->prox != (*li) && no->dados.matricula != mat)
        no = no->prox;
    if(no->dados.matricula != mat) {
    	printf("\nMatricula nao encontrada\n"); //mensagens.c
        return 0;
    }
    else{
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        return 1;
    }
}

//Implementação da funcao imprime_lista
void imprime_lista(Lista* li, struct aluno *al){

	lista_vazia(li);

    Elem* no = *li;
    while(no != NULL){
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        no = no->prox;
    }
}
