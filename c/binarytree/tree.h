
struct aluno{
    int id;
};

typedef struct no* root;
typedef struct no No;
typedef struct aluno Aluno;

root* criar();
int vazia(root*);
void rmNo(No*);
int preOrdem(No*);
int posOrdem(No*);
int emOrdem(No*);
int Altura(No*);
int contNo(No*);
int inserirNo(No*, Aluno);
 
