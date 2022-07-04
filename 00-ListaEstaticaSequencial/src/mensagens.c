//Arquivo mensagens.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

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

//Ler dados do Aluno informados pelo usuario
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

int remover_matricula(){
	int matricula = 0;
    printf("\nDigite a matricula a ser removida: ");
    scanf("%d", &matricula);
    return matricula;
}

void msg_matricula_nao_encontrada(int matricula){
	printf("\nMatricula >>%d<< nao encontrada \n", matricula);
}

void msg_matricula_removida(int matricula){
	printf("\nRemovida a matricula >>%d<< da lista", matricula);
}

int msg_consulta_posicao(){
	int posicao = 0;
    printf("\nDigite a posicao a ser buscada: ");
    scanf("%d", &posicao);
    return posicao;
}

int msg_consulta_matricula(){
	int matricula = 0;
	printf("\nDigite a matricula a ser buscada: ");
	scanf("%d", &matricula);
	return matricula;
}

void exibe_consulta(struct aluno *al){
    printf("-------------------------------\n");
    printf("Matricula: %d\n", al->matricula);
    printf("Nome: %s\n",  al->nome);
    printf("Notas: %.2f %.2f %.2f\n",
    		al->n1,
            al->n2,
            al->n3);
    printf("-------------------------------\n");
}
