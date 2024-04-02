

struct aluno{
    int id;
};

typedef struct aluno Aluno;
typedef struct no No;
typedef struct no* Raiz;

Raiz* criar();
int inserir(Raiz*, struct aluno);
int preOrdem(No*);
int altura(No*);
void view(No*);
void deletarNo(No**, int);
int strict(No*);
int isBalanced(No* raiz);
int contNo(No* no);
int nivel(No* no, int n, int altura);
