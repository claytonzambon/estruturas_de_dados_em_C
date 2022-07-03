//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

int consulta_topo_pilha(Pilha* pi, struct aluno al){
	if (pilha_vazia(pi))
		return 0;

    exibe_consulta(pi->dados[pi->qtd-1]);
    return 1;
}

//Implementação da funcao imprime_pilha
void imprime_pilha(Pilha* pi, struct aluno al){

	pilha_vazia(pi);

	for (int i = pi->qtd - 1; i >= 0; i--){
		exibe_consulta(pi->dados[i]);
	}
}
