//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Prot�tipos

//Implementa��o da Fun��o consulta_lista_pos
void consulta_lista_pos(Lista* li, struct aluno *al){
    if (lista_vazia(li)){
    	//Exibe mensagem da fun��o lista_vazia(li)
    }
    else {

    	int posicao = msg_consulta_posicao();

		Elem *no = *li;
		int i = 1;
		while(no != NULL && i < posicao){
			no = no->prox;
			i++;
		}
		if(no == NULL)
		{
			printf("\nPosi��o inexistente\n");
		}
		else{
			*al = no->dados;
			exibe_consulta(al); //mensagens.c
		}
    }
}

//Implementa��o da Fun��o consulta_lista_mat
void consulta_lista_mat(Lista* li, struct aluno *al){
    if (lista_vazia(li)){
    	//Exibe mensagem da fun��o lista_vazia(li)
    }
    else {

    	int matricula = msg_consulta_matricula();

		Elem *no = *li;
		while(no != NULL && no->dados.matricula != matricula){
			no = no->prox;
		}
		if(no == NULL){
			printf("\nMatr�cula n�o encontrada\n");
		}
		else{
			*al = no->dados;
			exibe_consulta(al); //mensagens.c
		}
    }
}

//Implementa��o da Fun��o imprime_lista
void imprime_lista(Lista* li){
    if (lista_vazia(li)){
    	//Exibe mensagem da fun��o lista_vazia(li)
    }
    else {

		Elem* no = *li;
		st_aluno *al = NULL;
		while(no != NULL){
			*al = no->dados;
			exibe_consulta(al); //mensagens.c
			no = no->prox;
		}
    }
}
