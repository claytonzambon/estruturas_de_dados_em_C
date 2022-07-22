/*
 ============================================================================
 Name        : 06-PilhaDinamicaEncadeada.c
 Author      : Clayton Zambon
 Version     :
 Copyright   : Clayton Zambon
 Description : Pilha Dinâmica Encadeada, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "header.h"

int main(){
	setlocale(LC_ALL, "");

    Pilha* pi = cria_pilha();

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
                printf("O tamanho da Pilha é: %d\n", tamanho_pilha(pi));
                break;
			case 6:
				printf("\n\n\t\t Atá logo !!\n\n\n\n\n\n\n\n\n\n");
				i=0;
				break;
            default:
                printf("\n\nOpcao inválida\n\n");
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
