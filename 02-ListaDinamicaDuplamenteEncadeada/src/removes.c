//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da funcao remove_lista_inicio
void remove_lista_inicio(Lista* li){

    if (lista_vazia(li))
    	msg_falha_remocao(); //mensagens.c

    Elem *no = *li;
    *li = no->prox;

    if(no->prox != NULL)
        no->prox->ant = NULL;

    free(no);
    msg_removido_com_sucesso(); //mensagens.c
}
//Implementação da funcao remove_lista_final
void remove_lista_final(Lista* li){

    if (lista_vazia(li))
    	msg_falha_remocao(); //mensagens.c

    Elem *no = *li;

    while(no->prox != NULL)
        no = no->prox;

    if(no->ant == NULL)//remover o primeiro e único
        *li = no->prox;
    else
        no->ant->prox = NULL;

    free(no);

    msg_removido_com_sucesso(); //mensagens.c
}
//Implementação da funcao remove_lista
void remove_lista(Lista* li, int mat){

    if (lista_vazia(li)){
    	msg_falha_remocao(); //mensagens.c
    } else {
    	int matricula = remover_matricula(); //mensagens.c

    	Elem *no = *li;

    	while(no != NULL && no->dados.matricula != mat){
    		no = no->prox;
    	}

    	if(no == NULL){//não encontrado
    	    msg_matricula_nao_encontrada(matricula); //mensagens.c
    	}

    	if(no->ant == NULL)//remover o primeiro?
    	    *li = no->prox;
    	else
    	    no->ant->prox = no->prox;

    	if(no->prox != NULL)//não é o último?
    	    no->prox->ant = no->ant;

    	free(no);
    	msg_matricula_removida(matricula);  //mensagens.c
    }


}
