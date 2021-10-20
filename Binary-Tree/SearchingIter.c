#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; 
    n = (struct node *) malloc(sizeof(struct node)); 
    n->data = data; 
    n->left = NULL; 
    n->right = NULL;
    return n; 
}

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node* searchIter(struct node* root, int value){
    while(root!=NULL){
    if(root->data == value)
       return root;
    else if(root->data>value)
        root = root->left;
    else
        root = root->right;
    }
    return NULL;
}

int main(){
     
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    struct node* n1 = searchIter(p,6);
    if(n1!=NULL){
        printf("Found: %d", n1->data);
    }
    else{
        printf("Element not Found");
    }
    return 0;
}
/*
Found: 6
*/
