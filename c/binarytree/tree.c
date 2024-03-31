#include <stdlib.h>
#include <stdio.h>
#include "tree.h"

struct no{
    struct no *esq;
    Aluno dat;
    struct no *dir;    
};

No* criar(){
    No* root = (No*)malloc(sizeof(No));
    if (root)
        return root;
    return NULL;
}

int vazia(No* no){
    if (no)
        return 1;
    return 0;
}

int rmNo(No* no){
    if (no){
        rmNo(no->esq);
        rmNo(no->dir);
        free(no);
    }
    return 0;
}

int preOrdem(No* no){
    if(no){
        printf("%i\n",no->dat.id);
        preOrdem(no->esq);
        preOrdem(no->dir);
    }
    return 1;
}

int posOrdem(No* no){
    if(no){
        posOrdem(no->esq);
        posOrdem(no->dir);
        printf("%i\n",no->dat.id);
    }
    return 1;
}

int emOrdem(No* no){
    if(no){
        emOrdem(no->esq);
        printf("%i\n",no->dat.id);
        emOrdem(no->dir);
   }
    return 1;
}

int Altura(No* no){
    if(!no)
        return 0;
    int esq = Altura(no->esq);
    int dir = Altura(no->dir);
    return ((esq > dir) ? esq : dir) + 1; 
}

int contNo(No* no){
    if (!no) 
        return 0;
    return (contNo(no->esq) + contNo(no->dir)) + 1;
}

int inserirNo(No* no, Aluno newDat){
    if (!no)
        return 0;
    
    

    /* No* ins = (No*)malloc(sizeof(No));
    if (!ins)
        return 0;
    ins->dat = newDat;
    ins->esq = NULL;
    ins->dir = NULL;
    if (*no == NULL){
        *no = ins;
        return 1;
    }
    No* aux = no;
    No* ant = aux;
    while(aux){
        ant = aux;
        ((aux->dat.id > ins->dat.id) ? (aux = aux->esq) : (aux = aux->dir));
    }
    ((ant->dat.id > ins->dat.id) ? (ant->esq = ins) : (ant->dir = ins));
    return 1;
    */
}



















