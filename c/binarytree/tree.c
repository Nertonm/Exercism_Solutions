#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

struct no{
    struct no *esq;
    struct aluno dat;
    struct no *dir;    
};

root* criar(){
    root* root = (struct no**)malloc(sizeof(root));
    if (root != NULL) 
        *root = NULL;
    return root;
}

int vazia(root* no){
    if (*no)
        return 1;
    return 0;
}

void rmNo(No* no){
    if (no){
        rmNo(no->esq);
        rmNo(no->dir);
        free(no);
        no = NULL;
    }
}

int preOrdem(No* no){
    if (no){
        printf("%i\n",no->dat.id);
        preOrdem(no->esq);
        preOrdem(no->dir);
    }
}

int posOrdem(No* no){
}

int emOrdem(No* no){
}

int Altura(No** no){
    if (!no)
        return 1;
    int esq = Altura(no->esq);
    int dir = Altura(no->dir);
    return  ((esq > dir) ? esq : dir) + 1;
}

int contNo(No** no){
    if (!no)
        return 0;
    int esq = Altura(no->esq);
    int dir = Altura(no->dir);
    return (esq + dir) + 1;
}

int inserirNo'(No* no, Aluno newDat){
     
}

















