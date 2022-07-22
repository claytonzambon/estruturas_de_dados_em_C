//Arquivo infos.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Prot�tipos

//Implementa��o da Fun��o que Cria a Lista
Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

//Implementa��o da Fun��o que Libera a Lista
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

//Implementa��o da Fun��o que retorna o tamanho da Lista
void tamanho_lista(Lista* li){
    if (lista_vazia(li)){
        //Exibe mensagem da fun��o lista_vazia
    } else {

		int cont = 0;
		Elem* no = *li; //n� auxiliar
		while(no != NULL){
			cont++;
			no = no->prox;
		}
		msg_tamanho_lista(cont);
    }
}

//Implementa��o da Fun��o lista_vazia
int lista_vazia(Lista* li){
    if(li == NULL || *li == NULL)
    {
        printf("\n\nLista Vazia\n\n");
        return 1;
    }
    return 0;
}


