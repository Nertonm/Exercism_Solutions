

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
