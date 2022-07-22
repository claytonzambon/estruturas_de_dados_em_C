//Arquivo mensagens.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

//Implementacao do MENU
void menu()
{
	printf("ACADEMICO: <Seu Nome>\n\n");
	printf("\n################################################");
	printf("\n#    MENU - Lista Dinâmica Duplamencadeada     #");
	printf("\n#                                              #");
	printf("\n#	Digite a opção desejada                #");
	printf("\n#                                              #");
	printf("\n#	 1 = Inserir elemento no Final         #");
	printf("\n#	 2 = Inserir elemento no Início        #");
	printf("\n#	 3 = Inserir elemento Ordenado         #");
	printf("\n#	 4 = Remover elemento do Final         #");
	printf("\n#	 5 = Remover elemento do Início        #");
	printf("\n#	 6 = Remover elemento                  #");
	printf("\n#	 7 = Consultar elemento pela posição   #");
	printf("\n#	 8 = Consultar elemento pela Matrícula #");
	printf("\n#	 9 = Exibir lista                      #");
	printf("\n#	 10 = Exibir Tamanho da Lista          #");
	printf("\n#	 11 = Sair                             #");
	printf("\n#                                              #");
	printf("\n################################################");
	printf("\n\n");
	printf("\nEscolha uma opção para continuar >>: ");
}

st_aluno informar_dados_aluno(){
	st_aluno al;
    printf("\nDigite a Matrícula: ");
    scanf("%d", &al.matricula);
    printf("Digite o nome: ");
    scanf("%s", al.nome);
    printf("Digite a Nota 01: ");
    scanf("%f", &al.n1);
    printf("Digite a Nota 02: ");
    scanf("%f", &al.n2);
    printf("Digite a Nota 03: ");
    scanf("%f", &al.n3);
    printf("Digite a Nota 04: ");
    scanf("%f", &al.n4);
    return al;
}

void msg_tamanho_lista(int tamanho){
	printf("\n\nO tamanho da Lista é %d\n", tamanho);
}

void msg_inserido_com_sucesso(){
    printf("\n\n>>> Elemento Inserido com sucesso <<<\n\n");
}

void msg_falha_insercao(){
    printf("\n\n>>> Falha na Inserção <<<\n\n");
}

void msg_removido_com_sucesso(){
    printf("\n\n>>> Elemento Removido com Sucesso <<<\n\n");
}

void msg_falha_remocao(){
    printf("\n\n>>> Falha na Remoção <<<\n\n");
}

int remover_matricula(){
	int matricula = 0;
    printf("\n\nDigite a matrícula a ser removida: ");
    scanf("%d", &matricula);
    return matricula;
}

void msg_matricula_nao_encontrada(int matricula){
	printf("\nMatrícula >>%d<< não encontrada \n", matricula);
}

void msg_matricula_removida(int matricula){
	printf("\nRemovida a matrícula >>%d<< da lista", matricula);
}

int msg_consulta_posicao(){
	int posicao = 0;
    printf("\nDigite a posição a ser buscada: ");
    scanf("%d", &posicao);
    return posicao;
}

int msg_consulta_matricula(){
	int matricula = 0;
	printf("\n\nDigite a matrícula a ser buscada: ");
	scanf("%d", &matricula);
	return matricula;
}

void exibe_consulta(struct aluno *al){
    printf("-------------------------------\n");
    printf("Matrícula: %d\n", al->matricula);
    printf("Nome: %s\n",  al->nome);
    printf("Notas: "
    		"N1: %.2f - N2: %.2f - N3: %.2f - N4: %.2f\n",
    		al->n1,
            al->n2,
            al->n3,
			al->n4);
    printf("-------------------------------\n");
}
