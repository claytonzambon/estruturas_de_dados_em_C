//Arquivo mensagens.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

//Implementacao do MENU
void menu()
{
	printf("ACADEMICO: <Seu Nome>\n\n");
	printf("\n################################################");
	printf("\n#       MENU - Lista Estatica Sequencial       #");
	printf("\n#                                              #");
	printf("\n#	Digite a opcao desejada                #");
	printf("\n#                                              #");
	printf("\n#	 1 = Inserir elemento no Final         #");
	printf("\n#	 2 = Inserir elemento no Inicio        #");
	printf("\n#	 3 = Inserir elemento Ordenado         #");
	printf("\n#	 4 = Remover elemento do Final         #");
	printf("\n#	 5 = Remover elemento do Inicio        #");
	printf("\n#	 6 = Remover elemento                  #");
	printf("\n#	 7 = Consultar elemento pela posicao   #");
	printf("\n#	 8 = Consultar elemento pela Matricula #");
	printf("\n#	 9 = Exibir lista                      #");
	printf("\n#	 10 = Exibir Tamanho da Lista          #");
	printf("\n#	 11 = Sair                             #");
	printf("\n#                                              #");
	printf("\n################################################");
	printf("\n\n");
	printf("\nEscolha uma opcao para continuar >>: ");
}

void msg_inserido_com_sucesso(){
    printf("\n\n>>> Elemento inserido com sucesso <<<\n\n");
}

void msg_falha_insercao(){
    printf("\n\n>>> Falha na insercao <<<\n\n");
}
