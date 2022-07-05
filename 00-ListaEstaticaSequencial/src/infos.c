//Arquivo infos.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementando a função criar lista
Lista* cria_lista(){
    Lista *li; //Declara ponteiro
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}


//Implementando a função libera lista
void libera_lista(Lista* li){
    free(li);
}

//Implementando a funcao lista Cheia
int lista_cheia(Lista* li){
    if(li == NULL)
    {
        printf("\nLista inválida\n");
        return -1;
    }
    if (li->qtd == MAX)
    {
        printf("\nLista Cheia\n");
        return (li->qtd == MAX);
    }
    return 0;
}


//Implementando a funcao lista Vazia
int lista_vazia(Lista* li){
    if(li == NULL)
    {
        printf("\nLista Inválida\n");
        return -1;
    }
    if(li->qtd == 0)
    {
        printf("\nLista Vazia\n");
        return (li->qtd == 0);
    }
    return 0;
}

//Implementando a funcao Tamanho da lista
void tamanho_lista(Lista* li){
    if (lista_vazia(li)){
        //Exibe mensagem da função lista_vazia
    }
    else {
        msg_tamanho_lista(li->qtd);
    }
}
