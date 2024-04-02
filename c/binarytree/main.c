#include "stdio.h"
#include "stdlib.h"
#include "tree.h"

int main(){
    Raiz* raiz;
    No* no;
    int dat, choice;
    do{
        printf("\n1-Criar\n2-Inserir\n3-Pre Ordem\n4- Altura\n");
        scanf("%i",&choice);
        switch (choice){
            case 1:
                raiz = criar();
                break;
            case 2:
                Aluno cu;
                scanf("%i",&dat);
                cu.id = dat;
                inserir(raiz, cu);
                break;
            case 3:
                no = *raiz;
                preOrdem(no);
                break;
            case 4: 
                no = *raiz;
                int alt = altura(no);
                printf("%i",alt);
                break;
            case 5:
                no = *raiz;
                view(no);
                break;
            case 6:
                scanf("%i",&dat);
                deletarNo(raiz,dat); 
                break;
            case 7:
                int aaa = strict(*raiz);
                printf("%i",aaa);
                break;
            case 8:
                dat = isBalanced(*raiz);
                printf("%i",dat);
                break;
            case 9:
                choice = altura(*raiz);
                scanf("%i",&dat);
                nivel(*raiz,dat,choice);
                // dat = contNo(*raiz);
               // printf("%i",dat);
                break;
        }
    }
    while(1);
}
