//Arquivo inserts.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

int insere_pilha(Pilha* pi, struct aluno al){
    if (pilha_cheia(pi))
        return 0;

    al = informar_dados_aluno(); //função do arquivo mensagens.c

    pi->dados[pi->qtd] = al;
    pi->qtd++;
    return 1;
}
