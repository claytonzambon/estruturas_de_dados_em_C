//Arquivo removes.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Prot�tipos

int remove_pilha(Pilha* pi){
    if (pilha_vazia(pi))
        return 0;

    pi->qtd--;
    return 1;
}
