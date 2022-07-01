//Arquivo inserts.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

Lista* informar_dados_aluno(struct aluno *al){
    printf("Digite a Matricula: ");
    scanf("%d", &al->matricula);
    printf("Digite o nome: ");
    scanf("%s", al->nome);
    printf("Digite a Nota 01: ");
    scanf("%f", &al->n1);
    printf("Digite a Nota 02: ");
    scanf("%f", &al->n2);
    printf("Digite a Nota 03: ");
    scanf("%f", &al->n3);
    return al;
}

//Implementando a funcao insere_lista_final
int insere_lista_final(Lista* li, struct aluno al){
    if (lista_cheia(li))
        return 0;

    informar_dados_aluno(&al);
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}


//Implementando a funcao insere_lista_inicio
int insere_lista_inicio(Lista* li, struct aluno al){
    if (lista_cheia(li))
        return 0;

    informar_dados_aluno(&al);
    int i;
    for(i=li->qtd-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];
    li->dados[0] = al;
    li->qtd++;
    return 1;
}


//Implementando a funcao insere_lista_ordenada
int insere_lista_ordenada(Lista* li, struct aluno al){
    if (lista_cheia(li))
        return 0;

    informar_dados_aluno(&al);
    int k,i = 0;
    while(i<li->qtd && li->dados[i].matricula < al.matricula)
        i++;

    for(k=li->qtd-1; k >= i; k--)
        li->dados[k+1] = li->dados[k];

    li->dados[i] = al;
    li->qtd++;
    return 1;
}
