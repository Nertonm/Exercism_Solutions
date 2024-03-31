#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
void displayMenu() {
    printf("\n** Binary Tree Operations Menu **\n");
    printf("1. Criar arvore (Create tree)\n");
    printf("2. Verificar se arvore esta vazia (Check if tree is empty)\n");
    printf("3. Remover um No (Remove a node)\n");
    printf("4. Percurso em Pre-ordem (Pre-order traversal)\n");
    printf("5. Percurso em Pos-ordem (Post-order traversal)\n");
    printf("6. Percurso em Ordem (In-order traversal)\n");
    printf("7. Calcular altura da arvore (Calculate tree height)\n");
    printf("8. Contar numero de Nos (Count number of nodes)\n");
    printf("9. Inserir um No (Insert a node)\n");
    printf("10. Sair (Exit)\n");
    printf("Enter your choice: ");
}
int main(){
    root* root;  // Initialize root to NULL
    int choice, data;
    do{
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                root = criar();
                No* no = *root;
                break;
            case 2:   
                data = vazia(root); 
                printf("%i",data);
                break;
            case 3:
                break;
            case 4:
                if (vazia(root)){
                    preOrdem(no);
                    break;
                }
                printf("Invalid Tree");
                break;
            case 5:
                if (vazia(root)){
                    posOrdem(no);
                    break;
                }
                printf("Invalid Tree");
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                data =  contNo(no); 
                printf("%i",data);
                break;
            case 9:
                Aluno info;
                scanf("%i",&data);
                info.id = data;
                inserirNo(no,info);
        } 
    }
    while (1);


    return 0;
}           

