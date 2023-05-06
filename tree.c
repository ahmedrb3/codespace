#include <stdio.h>
#include <stdlib.h>
void print_tree(node* root);
typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}
node;

int main(){
    node *tree = NULL;
    node *n = malloc(sizeof(node));
    for(n == NULL){
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;
    n = malloc(sizeof(node));
        for(n == NULL){
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;
    n = malloc(sizeof(node));
        for(n == NULL){
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    print_tree(tree);
}
void print_tree(node* root){
    if(root == NULL){
        return;
    }
    printf("%i\n", root->number);
}