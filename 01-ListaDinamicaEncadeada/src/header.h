//Arquivo header.h
//Tamanho que ser� nosso vetor
#define MAX 3

/*Definindo um Tipo Aluno
Elementos da Lista: desta forma ser� poss�vel guardar
v�rios tipos de dados*/
typedef struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
}st_aluno;

/*Implementando a Struct do tipo lista
Controlador: ira controlar o tamanho da lista
e a posi��o dos elementos*/
//Defini��o do tipo lista com um ponteiro *prox para fazer o encadeamento
struct elemento{
    st_aluno dados;
    struct elemento *prox;
};

//Definindo uma struct Lista
typedef struct elemento* Lista;
typedef struct elemento Elem;

//Declara��o de uma Struct para armazenar e inserir os elementos
st_aluno dados_aluno;

//Fun��es do arquivo infos.c
Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);

//Fun��es do arquivo inserts.c
void insere_lista_inicio(Lista* li, struct aluno al);
void insere_lista_final(Lista* li, struct aluno al);
void insere_lista_ordenada(Lista* li, struct aluno al);

//Fun��esdo arquivo removes.c
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
int remove_lista(Lista* li, int mat);
void msg_removido_com_sucesso();
void msg_falha_remocao();

//Fun��es do arquivo searches.c
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);
void imprime_lista(Lista* li, struct aluno *al);

//Fun��es do arquivo mensagens.c
void menu();
st_aluno informar_dados_aluno();
void msg_inserido_com_sucesso();
void msg_falha_insercao();
void exibe_consulta(struct aluno *al);
