#include "tree.h"
#include "stdio.h"
#include "stdlib.h"

struct no{
    struct no* esq;
    struct no* dir;
    struct aluno dat;
};

Raiz* criar(){
    Raiz* raiz = (Raiz*)malloc(sizeof(Raiz));
    if (*raiz)
        *raiz = NULL;
    return raiz;
}

int inserir(Raiz* raiz, struct aluno datNew){
    if (!raiz)
        return 0;
    No* ins = (No*)malloc(sizeof(No));
    if (!ins)
        return 0;

    ins->esq = NULL;
    ins->dir = NULL;
    ins->dat = datNew;

    if (*raiz == NULL){
        *raiz = ins;
        return 1;
    }
    No* aux = *raiz;
    No* ant = aux;
    while(aux){
        ant = aux;
        if (aux->dat.id == ins->dat.id)
            return 0;
        if (aux->dat.id > ins->dat.id)
            aux = aux->esq;
        else if (aux->dat.id < ins->dat.id)
            aux = aux->dir;
    }
    if (ant->dat.id > ins->dat.id){
        ant->esq = ins;
        return 1;
    }
    ant->dir = ins;
    return 1;
}

int preOrdem(No* no){
    if(!no)
        return 1;
    printf("%i\n", no->dat.id);
    preOrdem(no->esq);
    preOrdem(no->dir);
}

int altura(No* no){
    if (!no)
        return 0;
    int esq = altura(no->esq);
    int dir = altura(no->dir);
    return ((esq > dir) ? esq : dir) + 1;
}


void view(No* no){
    if (!no)
        return;
    int alt = altura(no);
    view(no->esq);
    for (int i = 0; i < alt; i++){
        printf("-");
    }
    printf("%i",no->dat.id);
    printf("\n");
    view(no->dir);
}

void deletarNo(No** no, int x){
    No* aux = *no;
    No* ant = aux;    
    if (aux->dat.id == x)
        return;
    while (aux){
        if (x > aux->dat.id){
            ant = aux;
            aux = aux->dir;
        }
        else if (x < aux->dat.id){
            ant = aux;
            aux = aux->esq;
        }
        else{
            if (aux->esq && aux->dir){
                No* tmp = aux->esq;
                No* tmp2 = tmp;
                while (tmp->dir){
                    tmp2 = tmp;
                    tmp = tmp->dir;
                }
                tmp2->dir = NULL;
                if (ant->esq == aux){
                    ant->esq = tmp;
                } else {
                    ant->dir = tmp;
                }
                tmp->dir = aux->dir;
                return;

            }
            if (!(aux->esq && aux->dir)){
                if (aux == ant->esq){
                    ant->esq = NULL;
                    free(aux);
                    return;
                }
                ant->dir = NULL;
                free(aux);
                return;
            }
        }
    }
    printf("Não encontrado");
}

int strict(No* raiz){
    if (!raiz) 
        return 1;
    if (!raiz->esq && raiz->dir)
        return 0;
    if (raiz->esq && !raiz->dir)
        return 0;
    return strict(raiz->esq) && strict(raiz->dir);
}

int isBalanced(No* raiz){
    if (!raiz)
        return 1;
    int dif = abs((altura(raiz->esq) - altura(raiz->dir)));
    if (dif > 1)
        return 0;
    return (isBalanced(raiz->esq) && isBalanced(raiz->dir)); 

}


int contNo(No* no){
    if (!no)
        return 0;
    return contNo(no->esq) + contNo(no->dir) + 1;
}





