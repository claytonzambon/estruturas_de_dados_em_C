//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementando a funcao remove_lista_final
void remove_lista_final(Lista* li){
    if (lista_vazia(li)){
    	msg_falha_remocao(); //mensagens.c
    }
    else {
    	li->qtd--;
    	msg_removido_com_sucesso(); //mensagens.c
    }
}
//Implementando a funcao remove_lista_inicio
void remove_lista_inicio(Lista* li){
    if (lista_vazia(li)){
    	msg_falha_remocao(); //mensagens.c
    }
    else {
		int k = 0;

		for(k=0; k< li->qtd-1; k++)
			li->dados[k] = li->dados[k+1];

		li->qtd--;
		msg_removido_com_sucesso(); //mensagens.c
    }
}
//Implementando a funcao remove_lista
void remove_lista(Lista* li){
    if (lista_vazia(li)){
    	msg_falha_remocao(); //mensagens.c
    }
    else {

    	int matricula = remover_matricula(); //mensagens.c

		int k,i = 0;

		//Verifica se a matricula existe
		while(i<li->qtd && li->dados[i].matricula != matricula)
			i++;

		if(i == li->qtd) { //Elemento nao encontrado
			msg_matricula_nao_encontrada(matricula); //mensagens.c
		}

		for(k=i; k< li->qtd-1; k++)
			li->dados[k] = li->dados[k+1];

		li->qtd--;
		msg_matricula_removida(matricula);  //mensagens.c
    }
}
