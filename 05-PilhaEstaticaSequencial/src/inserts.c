//Arquivo inserts.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Prot�tipos

int insere_pilha(Pilha* pi, struct aluno al){
    if (pilha_cheia(pi))
        return 0;

    al = informar_dados_aluno(); //fun��o do arquivo mensagens.c

    pi->dados[pi->qtd] = al;
    pi->qtd++;
    return 1;
}
