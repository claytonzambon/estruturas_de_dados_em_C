//Arquivo inserts.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementando a funcao insere_lista_final
void insere_lista_final(Lista* li, struct aluno al){
    if (lista_cheia(li)){
    	msg_falha_insercao();
    }
    else {
        al = informar_dados_aluno(); //mensagens.c
        li->dados[li->qtd] = al;
        li->qtd++;
        msg_inserido_com_sucesso();
    }
}


//Implementando a funcao insere_lista_inicio
void insere_lista_inicio(Lista* li, struct aluno al){
    if (lista_cheia(li)){
    	msg_falha_insercao();
    }
    else {
    	al = informar_dados_aluno(); //mensagens.c
    	int i;
    	for(i=li->qtd-1; i>=0; i--)
    		li->dados[i+1] = li->dados[i];

    	li->dados[0] = al;
    	li->qtd++;
    	msg_inserido_com_sucesso();
    }
}


//Implementando a funcao insere_lista_ordenada
void insere_lista_ordenada(Lista* li, struct aluno al){
    if (lista_cheia(li)){
    	msg_falha_insercao();
    }
    else {
        al = informar_dados_aluno(); //mensagens.c
        int k,i = 0;

        while(i<li->qtd && li->dados[i].matricula < al.matricula)
            i++;

        for(k=li->qtd-1; k >= i; k--)
            li->dados[k+1] = li->dados[k];

        li->dados[i] = al;
        li->qtd++;
        msg_inserido_com_sucesso();
    }
}
