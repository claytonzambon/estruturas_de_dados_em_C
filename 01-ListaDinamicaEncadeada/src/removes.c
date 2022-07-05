//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da Função remove_lista_inicio
void remove_lista_inicio(Lista* li){
    if (lista_vazia(li)){
    	msg_falha_remocao(); //mensagens.c
    }
    else {
		Elem *no = *li;
		*li = no->prox;
		free(no);
		msg_removido_com_sucesso(); //mensagens.c
    }
}

//Implementação da Função remove_lista_final
void remove_lista_final(Lista* li){
    if (lista_vazia(li)){
    	msg_falha_remocao(); //mensagens.c
    }
    else {
		Elem *ant, *no = *li;
		while(no->prox != NULL){
			ant = no;
			no = no->prox;
		}

		if(no == (*li)) { //remover o primeiro?
			*li = no->prox;
		} else {
			ant->prox = no->prox;
		}
		free(no);
		msg_removido_com_sucesso(); //mensagens.c
    }
}

//Implementação da Função remove_lista
void remove_lista(Lista* li){
    if (lista_vazia(li)){
    	msg_falha_remocao(); //mensagens.c
    }
    else {

    	int matricula = remover_matricula(); //mensagens.c

		Elem *ant, *no = *li;
		while(no != NULL && no->dados.matricula != matricula){
			ant = no;
			no = no->prox;
		}
		if(no == NULL){ //não encontrado
			msg_matricula_nao_encontrada(matricula); //mensagens.c
		}

		if(no == *li){ //remover o primeiro?
			*li = no->prox;
			msg_matricula_removida(matricula);  //mensagens.c
		} else {
			ant->prox = no->prox;
			msg_matricula_removida(matricula);  //mensagens.c
		}
		free(no);
    }
}
