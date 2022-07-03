/*
 ============================================================================
 Name        : 05-PilhaEstaticaSequencial.c
 Author      : Clayton Zambon
 Version     :
 Copyright   : Clayton Zambon
 Description : Pilha Estática Sequencial, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(){
    Pilha* pi = cria_pilha();
    //Declaração de uma Struct para armazenar e inserir os elementos
    //struct aluno dados_aluno;
    int opcao;
	int i = 1;
	do {
	    system("cls");
        menu();
        scanf("%d", &opcao);
		switch(opcao) {
			case 1:
                if (insere_pilha(pi, dados_aluno)){
                    msg_inserido_com_sucesso();
                } else {
                    msg_falha_insercao();
                }
                break;
			case 2:
			    if (remove_pilha(pi)){
                    msg_removido_com_sucesso();
			    } else {
                    msg_falha_remocao();
			    }
                break;
			case 3:
				consulta_topo_pilha(pi, dados_aluno);
                break;
			case 4:
                imprime_pilha(pi, dados_aluno);
                break;
            case 5:
                printf("O tamanho da Pilha eh: %d\n", tamanho_pilha(pi));
                break;
			case 6:
				printf("\n\n\t\t Ate logo !!\n\n\n\n\n\n\n\n\n\n");
				i=0;
				break;
            default:
                printf("\n\nOpcao invalida\n\n");
                break;
		}

		printf("\n\n");
		system("pause");
		printf("\n\n");
	} while(i == 1);

	libera_pilha(pi);;
    printf("\n\n\n\n");
    return EXIT_SUCCESS;
}
