//Arquivo header.h

typedef struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
}st_aluno;

//Definição do tipo Pilha
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento* Pilha;
typedef struct elemento Elem;

//Declaração de uma Struct para armazenar e inserir os elementos
st_aluno dados_aluno;

//Funções do Arquivo infos.c
Pilha* cria_pilha();
void libera_pilha(Pilha* pi);
int tamanho_pilha(Pilha* pi);
int pilha_vazia(Pilha* pi);
int pilha_cheia(Pilha* pi);

//Funções do arquivo searches.c
int consulta_topo_pilha(Pilha* pi, struct aluno al);
void imprime_pilha(Pilha* pi, struct aluno al);

//Funções do arquivo inserts.c
int insere_pilha(Pilha* pi, struct aluno al);

//Funções do arquivo removes.c
int remove_pilha(Pilha* pi);

//Funções do arquivo mensagens.c
st_aluno informar_dados_aluno();
void menu();
void msg_inserido_com_sucesso();
void msg_falha_insercao();
void msg_removido_com_sucesso();
void msg_falha_remocao();
void exibe_consulta(struct aluno al);

