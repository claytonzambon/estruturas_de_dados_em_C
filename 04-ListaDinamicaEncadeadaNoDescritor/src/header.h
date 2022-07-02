//Arquivo header.h
//Tamanho que será nosso vetor

/*Definindo um Tipo Aluno
Elementos da Lista: desta forma será possível guardar
vários tipos de dados*/
typedef struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
}st_aluno;

//Definição do tipo lista
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

//Definição do Nó Descritor
struct descritor{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

//Definindo uma struct Lista
typedef struct descritor Lista;

//Declaração de uma Struct para armazenar e inserir os elementos
st_aluno dados_aluno;

//Funções do arquivo infos.c
Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);

//Funções do arquivo inserts.c
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);
st_aluno informar_dados_aluno();

//Funçõesdo arquivo removes.c
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
int remove_lista(Lista* li, int mat);
void msg_removido_com_sucesso();
void msg_falha_remocao();

//Funções do arquivo searches.c
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);
void imprime_lista(Lista* li, struct aluno *al);

//Funções do arquivo mensagens.c
void menu();
void msg_inserido_com_sucesso();
void msg_falha_insercao();
void exibe_consulta(struct aluno *al);
