//Arquivo ListaSequencial.h
//Tamanho que será nosso vetor
#define MAX 6

/*Definindo um Tipo Aluno
Elementos da Lista: desta forma será possível guardar
vários tipos de dados*/
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};
//Definindo uma struct Lista
typedef struct lista Lista;

//Declaração de uma Struct para armazenar e inserir os elementos
struct aluno dados_aluno;

Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
int remove_lista(Lista* li, int mat);
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);
void imprime_lista(Lista* li);

void menu();
void msg_digite_matricula();
void msg_digite_nome();
void msg_digite_nota(int nota);

int remove_lista_otimizado(Lista* li, int mat);
void exibe_consulta();

//mensagens.c - Arquivo de Mensageria
int msg_removida_a_matricula(int mat);
void msg_removida_do_final();
void msg_removida_do_inicio();
void msg_lista_vazia();
void msg_insercao_com_sucesso();
void msg_insercao_com_falha();
int msg_matricula_nao_encontrado(int mat);
int msg_posicao_nao_encontrado(int pos);
int msg_exibe_consulta(struct aluno *al);
