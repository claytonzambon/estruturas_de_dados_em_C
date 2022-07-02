/*
 ============================================================================
 Name        : 00-ListaEstaticaSequencial.c
 Author      : Clayton Zambon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(){
    Lista* li = cria_lista();
    //Declaração de uma Struct para armazenar e inserir os elementos
    //struct aluno dados_aluno;
    int matricula_aluno, posicao;
    int opcao;
	int i = 1;
	do {
	    system("cls");
        menu();
        scanf("%d", &opcao);
		switch(opcao) {
			case 1:
                if (insere_lista_final(li, dados_aluno)){
                    msg_inserido_com_sucesso();
                } else {
                    msg_falha_insercao();
                }
                break;
            case 2:
                if (insere_lista_inicio(li, dados_aluno)){
                    msg_inserido_com_sucesso();
                } else {
                    msg_falha_insercao();
                }
                break;
            case 3:
                if (insere_lista_ordenada(li, dados_aluno)){
                    msg_inserido_com_sucesso();
                } else {
                    msg_falha_insercao();
                }
                break;
			case 4:
			    if (remove_lista_final(li)){
                    msg_removido_com_sucesso();
			    } else {
                    msg_falha_remocao();
			    }
                break;
            case 5:
                if (remove_lista_inicio(li)){
                    msg_removido_com_sucesso();
                } else {
                    msg_falha_remocao();
                }
                break;
			case 6:
                printf("\nDigite a matricula a ser removida: ");
                scanf("%d", &matricula_aluno);
                if (remove_lista(li, matricula_aluno)){
                    msg_removido_com_sucesso();
                } else {
                    msg_falha_remocao();
                }
                break;
			case 7:
                printf("\nDigite a posicao a ser buscada: ");
                scanf("%d", &posicao);
                consulta_lista_pos(li, posicao, &dados_aluno);
                break;
            case 8:
                printf("\nDigite a matricula a ser buscada: ");
                scanf("%d", &matricula_aluno);
                consulta_lista_mat(li, matricula_aluno, &dados_aluno);
                break;
			case 9:
                imprime_lista(li);
                break;
            case 10:
                printf("O tamanho da Lista eh: %d\n", tamanho_lista(li));
                break;
			case 11:
				printf("\n\n\t\t\Ate logo !!\n\n\n\n\n\n\n\n\n\n");
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

	libera_lista(li);;
    printf("\n\n\n\n");
    return EXIT_SUCCESS;
}
