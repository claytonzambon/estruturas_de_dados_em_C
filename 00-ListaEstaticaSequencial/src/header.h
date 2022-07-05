//Arquivo header.h
//Tamanho que ser� nosso vetor
#define MAX 5

/*Definindo um Tipo Aluno
Elementos da Lista: desta forma ser� poss�vel guardar
v�rios tipos de dados*/
typedef struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3, n4;
}st_aluno;;

/*Implementando a Struct do tipo lista
Controlador: ira controlar o tamanho da lista
e a posi��o dos elementos*/
struct lista{
    int qtd;
    struct aluno dados[MAX];
};

//Definindo uma struct Lista
typedef struct lista Lista;

//Declara��o de uma Struct para armazenar e inserir os elementos
st_aluno dados_aluno;

//Fun��es do arquivo infos.c
Lista* cria_lista();
void libera_lista(Lista* li);
void tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);

//Fun��es do arquivo inserts.c
void insere_lista_inicio(Lista* li, struct aluno al);
void insere_lista_final(Lista* li, struct aluno al);
void insere_lista_ordenada(Lista* li, struct aluno al);

//Fun��esdo arquivo removes.c
void remove_lista_final(Lista* li);
void remove_lista_inicio(Lista* li);
void remove_lista(Lista* li);


//Fun��es do arquivo searches.c
void consulta_lista_pos(Lista* li, struct aluno *al);
void consulta_lista_mat(Lista* li, struct aluno *al);
void imprime_lista(Lista* li);

//Fun��es do arquivo mensagens.c
void menu();
st_aluno informar_dados_aluno();
void msg_tamanho_lista(int tamanho);
int remover_matricula();
void msg_inserido_com_sucesso();
void msg_falha_insercao();
void msg_removido_com_sucesso();
void msg_falha_remocao();
void msg_matricula_nao_encontrada(int matricula);
void msg_matricula_removida(int matricula);
int msg_consulta_posicao();
int msg_consulta_matricula();
void exibe_consulta(struct aluno *al);
