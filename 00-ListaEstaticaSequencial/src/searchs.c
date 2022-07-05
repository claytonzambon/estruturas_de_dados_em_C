//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Prot�tipos

//Implementando a funcao consulta_lista_pos
void consulta_lista_pos(Lista* li, struct aluno *al){
    if (lista_vazia(li)){
    	//Exibe mensagem da fun��o lista_vazia(li)
    }
    else {
    	int posicao = msg_consulta_posicao();

		if(li == NULL || posicao <= 0 ||  posicao > li->qtd)
		{
			printf("\nPosi��o inexistente\n");

		}
		*al = li->dados[posicao-1];
		exibe_consulta(al);
    }
}
//Implementando a funcao consulta_lista_mat
void consulta_lista_mat(Lista* li, struct aluno *al){
    if (lista_vazia(li)){
    	//Exibe mensagem da fun��o lista_vazia(li)
    }
    else {
    	int matricula = msg_consulta_matricula();
		int i = 0;

		while(i<li->qtd && li->dados[i].matricula != matricula)
			i++;

		if(i == li->qtd)//elemento nao encontrado
		{
			printf("\nMatr�cula n�o encontrada\n");
		}
		*al = li->dados[i];
		exibe_consulta(al);
    }
}

//Implementacao para exibir a lista
void imprime_lista(Lista* li){
    if (lista_vazia(li)){
    	//Exibe mensagem da fun��o lista_vazia(li)
    }
    else {

    	st_aluno *al = li->dados;
        for(int i=0; i< li->qtd; i++){
        	*al = li->dados[i];
        	exibe_consulta(al);
        }
    }
}
