//Arquivo searchs.c
#include <stdio.h>
#include <stdlib.h>
#include "header.h" //inclui os Protótipos

//Implementando a funcao consulta_lista_pos
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
    if (lista_vazia(li))
        return 0;

    if(li == NULL || pos <= 0 ||  pos > li->qtd)
    {
        printf("\nPosicao inexistente\n");
        return 0;
    }
    *al = li->dados[pos-1];
    printf("-------------------------------\n");
    printf("Matricula: %d\n",li->dados[pos-1].matricula);
    printf("Nome: %s\n",li->dados[pos-1].nome);
    printf("Notas: %.2f %.2f %.2f\n",li->dados[pos-1].n1,
           li->dados[pos-1].n2,
           li->dados[pos-1].n3);
    printf("-------------------------------\n");
    return 1;
}
//Implementando a funcao consulta_lista_mat
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
    if (lista_vazia(li))
        return 0;

    int i = 0;
    while(i<li->qtd && li->dados[i].matricula != mat)
        i++;
    if(i == li->qtd)//elemento nao encontrado
    {
        printf("\nMatricula nao encontrada\n");
        return 0;
    }
    *al = li->dados[i];
    printf("-------------------------------\n");
    printf("Matricula: %d\n",li->dados[i].matricula);
    printf("Nome: %s\n",li->dados[i].nome);
    printf("Notas: %.2f %.2f %.2f\n",li->dados[i].n1,
           li->dados[i].n2,
           li->dados[i].n3);
    printf("-------------------------------\n");
    return 1;
}
//Implementacao para exibir a lista
void imprime_lista(Lista* li){
    if (lista_vazia(li))
        return 0;

    int i;
    printf("-------------------------------\n");
    for(i=0; i< li->qtd; i++){
        printf("Matricula: %d\n",li->dados[i].matricula);
        printf("Nome: %s\n",li->dados[i].nome);
        printf("Notas: %.2f %.2f %.2f\n",
               li->dados[i].n1,
               li->dados[i].n2,
               li->dados[i].n3);
        printf("-------------------------------\n");
    }
}
