#include "binary_search_tree.h"

node_t *build_tree(int *tree_data, size_t tree_data_len){
    int tam =  sizeof(tree_data) / sizeof(tree_data[0]);
    if (tree_data){ 
        // Setting Up tree root
        node_t* tree = (node_t*)malloc(sizeof(node_t));
        tree->data = tree_data[0];
        while (int i = 1; i < tam; i++){
            if (tree->data > tree_data[i]){
                node_t* treeEsq = (node_t*)malloc(sizeof(node_t));   
            }
        }
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


