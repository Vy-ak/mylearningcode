#include <stdio.h>
#include <stdlib.h>

struct data{
    int value;
    struct data *left;
    struct data *right;
} *root;

struct data *push(struct data *node, int x){
    if(node == NULL){
        node = (struct data *)malloc(sizeof(struct data));
        node->value = x;
        node->right = NULL;
        node->left = NULL;
    }else{
        if(x < node->value){
            node->left = push(node->left, x);
        }else if(x > node->value){
            node->right = push(node->right, x);
        }
    }

    return node;
}

void inorder(struct data *curr){
    if(curr != NULL){
        inorder(curr->left);
        printf("%d ", curr->value);
        inorder(curr->right);
    }
}

void preorder(struct data *curr){
    if(curr != NULL){
        printf("%d ", curr->value);
        preorder(curr->left);
        preorder(curr->right);
    }
}

void postorder(struct data *curr){
    if(curr != NULL){
        postorder(curr->left);
        postorder(curr->right);
        printf("%d ", curr->value);
    }
}

struct data *popall(struct data *node){
    if(node != NULL){
        node->left = popall(node->left);
        node->right = popall(node->right);
        free(node);
    }

    return NULL;
}

struct data *findmaxnode(struct data *node){
    while(node->right != NULL){
        node = node->right;
    }

    return node;
}

struct data *pop(struct data *node, int x){
    if(node == NULL){
        printf("not found\n");
        return NULL;
    }else{
        if(x < node->value){
            node->left = pop(node->left, x);
        }else if(x > node->value){
            node->right = pop(node->right, x);
        }else{
            if(node->left == NULL && node->right == NULL){
                //no child
                free(node);
                node = NULL;
                
            }else if(node->left == NULL){
                //right child
                struct data *temp = node;
                node = node->right;
                free(temp);
                temp = NULL;

            }else if(node->right == NULL){
                //left child
                struct data *temp = node;
                node = node->left;
                free(temp);
                temp = NULL;
            }else{
                //have left & right child
                struct data *temp = findmaxnode(node->left);
                node->value = temp->value;
                node->left = pop(node->left, temp->value);
            }
        }
        return node;
    }
}

int main(){
    root = push(root, 50);
    root = push(root, 30);
    root = push(root, 10);
    root = push(root, 20);
    root = push(root, 90);
    root = push(root, 80);
    root = push(root, 40);
    root = push(root, 45);


    printf("Inorder: ");
    inorder(root);
    puts(" ");

    printf("Preorder: ");
    preorder(root);
    puts(" ");

    printf("Postorder: ");
    postorder(root);
    puts(" ");

    // root = popall(root);

    // printf("Inorder: ");
    // inorder(root);
    // puts(" ");

    // printf("Preorder: ");
    // preorder(root);
    // puts(" ");

    // printf("Postorder: ");
    // postorder(root);
    // puts(" ");

    root = pop(root, 50);

    printf("Pop 50, Inorder: ");
    inorder(root);
    puts(" ");
    
    return 0;
}