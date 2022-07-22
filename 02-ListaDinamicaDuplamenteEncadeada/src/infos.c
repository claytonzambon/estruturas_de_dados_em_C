//Arquivo infos.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementação da Função que Cria a Lista
Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

//Implementação da Função que Libera a Lista
void libera_lista(Lista* li){
    if(li != NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

//Implementação da Função que retorna o tamanho da Lista
void tamanho_lista(Lista* li){
    if (lista_vazia(li)){
        //Exibe mensagem da função lista_vazia
    } else {

		int cont = 0;
		Elem* no = *li; //nó auxiliar
		while(no != NULL){
			cont++;
			no = no->prox;
		}
		msg_tamanho_lista(cont);
    }
}

//Implementação da Função lista_vazia
int lista_vazia(Lista* li){
    if(li == NULL || *li == NULL)
    {
        printf("\n\nLista Vazia\n\n");
        return 1;
    }
    return 0;
}


