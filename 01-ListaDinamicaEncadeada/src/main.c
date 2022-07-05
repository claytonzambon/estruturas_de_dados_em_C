/*
 ============================================================================
 Name        : 01-ListaDinamicaEncadeada.c
 Author      : Clayton Zambon
 Version     :
 Copyright   : Clayton Zambon
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "header.h"

int main(){
	setlocale(LC_ALL, "");

    Lista* li = cria_lista();
    int opcao;
	int i = 1;
	do {
	    system("cls");
        menu();
        scanf("%d", &opcao);
		switch(opcao) {
			case 1:
                insere_lista_final(li, dados_aluno);
                break;
            case 2:
                insere_lista_inicio(li, dados_aluno);
                break;
            case 3:
                insere_lista_ordenada(li, dados_aluno);
                break;
			case 4:
			    remove_lista_final(li);
                break;
            case 5:
                remove_lista_inicio(li);
                break;
			case 6:
                remove_lista(li);
                break;
			case 7:
                consulta_lista_pos(li, &dados_aluno);
                break;
            case 8:
                consulta_lista_mat(li, &dados_aluno);
                break;
			case 9:
				imprime_lista(li);
                break;
            case 10:
            	tamanho_lista(li);
                break;
			case 11:
				printf("\n\n\t\t Até logo !!\n\n\n\n\n\n\n\n\n\n");
				i=0;
				break;
            default:
                printf("\n\n Opção inválida\n\n");
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
