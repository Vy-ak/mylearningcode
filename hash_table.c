#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 97

struct data{
    int key;
    char str[100];
    struct data *next;
}*head[MAX_SIZE], *tail[MAX_SIZE];

int division(char str[]){
    int i;
    int total = 0;
    for(i = 0; i < strlen(str); i++){
        total += str[i];
    }

    return total%97;
}

void pushtail(int k, char s[100]){
    struct data *node = (struct data*)malloc(sizeof(struct data));
    node -> key = k;
    node -> next = NULL;

    strcpy(node->str, s);

    if(head[k] == NULL){
        head[k] = tail[k] = node;
    }else{
        tail[k]->next = node;
        tail[k] = node;
    }
    
}

void printchaining(){
    int i;
    for(i = 0; i < MAX_SIZE; i++){
        printf("%d. ", i);

        if(head[i] != NULL){
            struct data *curr = head[i];
            printf("%s", curr->str);
            curr = curr->next;
            while(curr != NULL){
               printf(" -> %s", curr->str); 
               curr = curr->next;
            }
        }
        printf("\n");
    }
}

char arr[MAX_SIZE][100] = {};

void linearprobing(int k, char s[100]){
    int i;
    if(strcmp(arr[k],"") == 0){
        strcpy(arr[k], s);
    }else{
        for(i = k + 1; i <= MAX_SIZE; i++){
            if(i == MAX_SIZE) i = 0;

            if(i == k){
                printf("full\n");
                break;
            }

            if(strcmp(arr[i],"") == 0){
                strcpy(arr[i], s);
                break;
            }
        }
    }
}

int main(){
    int i;
    // pushtail(1,"barry");
    // pushtail(1,"bonny");
    // pushtail(1,"bart");
    // pushtail(3,"Danny");
    // printchaining();

    linearprobing(division("Barry"),"Barry");
    linearprobing(division("Bonny"),"Bonny");
    linearprobing(division("Bart"),"Bart");
    linearprobing(division("danny"),"danny");

    for(i = 0; i < 97; i++){
        printf("%d. %s\n", i, arr[i]);
    }

    return 0;
}