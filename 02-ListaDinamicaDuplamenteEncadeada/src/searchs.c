//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da funcao consulta_lista_pos
void consulta_lista_pos(Lista* li, struct aluno *al){
    if (lista_vazia(li)) {
    	//Exibe mensagem da função lista_vazia(li)
    }
    else {

    	int posicao = msg_consulta_posicao();

    	if(posicao <= 0)
    		printf("\nPosicao Não encontrada\n"); //mensagens.c

    	Elem *no = *li;
    	int i = 1;

    	while(no != NULL && i < posicao) {
    		no = no->prox;
    	    i++;
    	}

    	if(no == NULL) {
    		printf("\nPosicao Não encontrada\n"); //mensagens.c
    	}
    	else {
    	    *al = no->dados;
    	    exibe_consulta(al); //mensagens.c
    	}
    }
}
//Implementação da funcao consulta_lista_mat
void consulta_lista_mat(Lista* li, struct aluno *al){
    if (lista_vazia(li)){
    	//Exibe mensagem da função lista_vazia(li)
    } else {

    	int matricula = msg_consulta_matricula();

    	Elem *no = *li;
    	while(no != NULL && no->dados.matricula != matricula){
    		no = no->prox;
    	}
    	if(no == NULL) {
    		printf("\nMatricula não encontrada\n"); //mensagens.c
   	    } else {
    	    *al = no->dados;
    	    exibe_consulta(al); //mensagens.c
    	}
    }
}

//Implementação da funcao imprime_lista
void imprime_lista(Lista* li){
    if (lista_vazia(li)){
    	//Exibe mensagem da função lista_vazia(li)
    } else {

		Elem* no = *li;
		st_aluno *al = NULL;
		while(no != NULL){
			*al = no->dados;
			exibe_consulta(al); //mensagens.c
			no = no->prox;
		}
    }
}
