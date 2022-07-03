//Arquivo mensagens.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

st_aluno informar_dados_aluno(){
	st_aluno al;
    printf("Digite a Matricula: ");
    scanf("%d", &al.matricula);
    printf("Digite o nome: ");
    scanf("%s", al.nome);
    printf("Digite a Nota 01: ");
    scanf("%f", &al.n1);
    printf("Digite a Nota 02: ");
    scanf("%f", &al.n2);
    printf("Digite a Nota 03: ");
    scanf("%f", &al.n3);
    return al;
}

//Implementacao do MENU
void menu()
{
	printf("ACADEMICO: <Seu Nome>\n\n");
	printf("\n################################################");
	printf("\n#       MENU - Pilha Estatica Sequencial       #");
	printf("\n#                                              #");
	printf("\n#	Digite a opcao desejada                #");
	printf("\n#                                              #");
	printf("\n#	 1 = Inserir elemento na Pilha         #");
	printf("\n#	 2 = Remover elemento da Pilha         #");
	printf("\n#	 3 = Consultar elemento da Pilha   #");
	printf("\n#	 4 = Exibir a Pilha                      #");
	printf("\n#	 5 = Exibir Tamanho da Pilha          #");
	printf("\n#	 6 = Sair                             #");
	printf("\n#                                              #");
	printf("\n################################################");
	printf("\n\n");
	printf("\nEscolha uma opcao para continuar >>: ");
}

void msg_inserido_com_sucesso(){
    printf("\n\n>>> Elemento Inserido com sucesso <<<\n\n");
}

void msg_falha_insercao(){
    printf("\n\n>>> Falha na Insercao <<<\n\n");
}

void msg_removido_com_sucesso(){
    printf("\n\n>>> Elemento Removido com Sucesso <<<\n\n");
}

void msg_falha_remocao(){
    printf("\n\n>>> Falha na Remocao <<<\n\n");
}

void exibe_consulta(struct aluno al){
    printf("-------------------------------\n");
    printf("Matricula: %d\n", al.matricula);
    printf("Nome: %s\n",  al.nome);
    printf("Notas: %.2f %.2f %.2f\n",
    		al.n1,
            al.n2,
            al.n3);
    printf("-------------------------------\n");
}
