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
    while (aux){
        ant = aux;
        if (aux->dat.id == x){
            break;
        }
        if (aux->dat.id > x){
            aux = aux->esq;
        }
        else if(aux->dat.id < x){
            aux = aux->dir;
        }
        else 
            return 0;
    }
    if (!(aux->esq && aux->dir)){
        aux = NULL;
        free(aux);   
    }
    if (aux->esq){
        ant->esq = aux->esq;
    }  
    if (aux->dir){
        ant->dir = ant->dir;
    }
}









