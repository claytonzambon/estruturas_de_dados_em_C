//main.c : Programa Principal
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"

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
				if(lista_cheia(li))
                {
                    system("pause");
                    break;
                } else {
                    msg_digite_matricula();
                    scanf("%d", &dados_aluno.matricula);
                    msg_digite_nome();
                    scanf("%s", dados_aluno.nome);
                    msg_digite_nota(01);
                    scanf("%f", &dados_aluno.n1);
                    msg_digite_nota(02);
                    scanf("%f", &dados_aluno.n2);
                    msg_digite_nota(03);
                    scanf("%f", &dados_aluno.n3);
                    if (insere_lista_final(li, dados_aluno)){
                        printf("Elemento inserido com sucesso\n\n");
                        system("pause");
                    } else {
                        printf("Falha na insercao\n\n");
                        system("pause");
                    }
                    break;
                }
            case 2:
				if(lista_cheia(li))
                {
                    break;
                } else {
                    msg_digite_matricula();
                    scanf("%d", &dados_aluno.matricula);
                    msg_digite_nome();
                    scanf("%s", dados_aluno.nome);
                    msg_digite_nota(01);
                    scanf("%f", &dados_aluno.n1);
                    msg_digite_nota(02);
                    scanf("%f", &dados_aluno.n2);
                    msg_digite_nota(03);
                    scanf("%f", &dados_aluno.n3);
                    insere_lista_inicio(li, dados_aluno);
                    break;
                }
            case 3:
				if(lista_cheia(li))
                {
                    break;
                } else {
                    msg_digite_matricula();
                    scanf("%d", &dados_aluno.matricula);
                    msg_digite_nome();
                    scanf("%s", dados_aluno.nome);
                    msg_digite_nota(01);
                    scanf("%f", &dados_aluno.n1);
                    msg_digite_nota(02);
                    scanf("%f", &dados_aluno.n2);
                    msg_digite_nota(03);
                    scanf("%f", &dados_aluno.n3);
                    insere_lista_ordenada(li, dados_aluno);
                    break;
                }
			case 4:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                } else {
                    remove_lista_final(li);
                    break;
                }
            case 5:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                } else {
                    remove_lista_inicio(li);
                    break;
                }
			case 6:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a matricula a ser removida: ");
                    scanf("%d", &matricula_aluno);
                    remove_lista(li, matricula_aluno);
                    break;
                }
			case 7:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a posicao a ser buscada: ");
                    scanf("%d", &posicao);
                    consulta_lista_pos(li, posicao, &dados_aluno);
                    system("pause");
                    break;
                }
            case 8:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a matricula a ser buscada: ");
                    scanf("%d", &matricula_aluno);
                    consulta_lista_mat(li, matricula_aluno, &dados_aluno);
                    break;
                }
			case 9:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                } else {
                    imprime_lista(li);
                    system("pause");
                    break;
                }
            case 10:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                } else {
                    printf("O tamanho da Lista eh: %d\n", tamanho_lista(li));
                    system("pause");
                    break;
                }
			case 11:
				printf("\n\n\t\t\Ate logo !!\n\n\n\n\n\n\n\n\n\n");
				i=0;
				break;
            default:
                printf("\n\nOpcao invalida\n\n");
                system ("pause");
                break;
		}
		printf("\n\n");
	} while(i == 1);

	libera_lista(li);
	system ("pause");
    printf("\n\n\n\n");
    return 0;
}
