#include "binary_search_tree.h"
#include "stdlib.h"

node_t *build_tree(int *tree_data, size_t tree_data_len){
    int tam = tree_data_len;
    //int tam =  sizeof(*tree_data) / sizeof(tree_data[0]);
    if (tree_data){ 
        // Setting Up tree root
        node_t* tree = (node_t*)malloc(sizeof(node_t));
        tree->data = tree_data[0];
        tree->left = NULL;
        tree->right = NULL;
        node_t* aux = tree;
        for (int i = 1; i < tam; i++){
            aux = tree;
            if (aux->data > tree_data[i]){
                while (aux->left) 
                    aux = aux->left;
                node_t* treeEsq = (node_t*)malloc(sizeof(node_t));
                treeEsq->data = tree_data[i];
                aux->left = treeEsq;
            } else {
                 if (aux->data < tree_data[i]){
                    while (aux->right) 
                        aux = aux->right;
                    node_t* treeDir = (node_t*)malloc(sizeof(node_t));
                    treeDir->data = tree_data[i];
                    aux->right = treeDir;    
                    }
                }
        }
        return tree;
    }
    return NULL;
}
/*
typedef struct node node_t;

struct node {
   node_t *right;
   node_t *left;
   int data;
};
*/

void free_tree(node_t *tree);
int *sorted_data(node_t *tree);


