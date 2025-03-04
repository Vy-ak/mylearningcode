#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    char name[100];
    int score;
    struct data *next;
    struct data *prev;

} *head, *tail;

// push head
void pushhead(char n[100], int s){
    struct data *node = (struct data*)malloc(sizeof(struct data));
    strcpy(node->name, n);
    node->score = s;
    node->next = node->prev = NULL;

    if(head == NULL){
        head = tail = node;
    }else{
        node->next = head;
        head->prev = node;
        head = node;
    }
}

// push tail
void pushtail(char n[100], int s){
    struct data *node = (struct data*)malloc(sizeof(struct data));
    strcpy(node->name, n);
    node->score = s;
    node->next = node->prev = NULL;

    if(tail == NULL){
        head = tail = node;
    }else{
        node->prev = tail;
        tail->next = node;
        tail = node;
    }
}


// push mid
void pushmid(char n[100], int s){
    struct data *node = (struct data *)malloc(sizeof(struct data));
    strcpy(node->name, n);
    node->score = s;
    node->next = node->prev = NULL;

    if(head == NULL){
        head = tail = node;
    }else{
        if(strcmp(node->name,head->name) < 0){
            node->next = head;
            head->prev = node;
            head = node;
        }else if(strcmp(node->name, tail->name) > 0){
            node->prev = tail;
            tail->next = node;
            tail = node;
        }else{
            struct data *curr = head;
            while(strcmp(curr->next->name, node->name) < 0){
                curr = curr->next;
            }

            node->next = curr->next;
            node->prev = curr;
            curr->next->prev = node;
            curr->next = node;
        }
    }
}


// pop head
void pophead(){
    if(head != NULL){
        if(head == tail){
            free(head);
            head = tail = NULL;
        }else{
            head = head->next;
            free(head->prev);
            head->prev = NULL;
        }
    }else{
        printf("No data\n");
    }
}

// pop tail
void poptail(){
    if(tail != NULL){
        if(tail == head){
            free(tail);
        }else{
            tail = tail->prev;
            free(tail->next);
            tail->next = NULL;
        }
    }else{
        printf("No data\n");
    }
}

// pop mid
void popmid(char n[100]){
    if(head != NULL){
        if(head == tail){
            if(strcmp(head->name, n) == 0){
                free(head);
                head = tail = NULL;
            }else{
                printf("Not found\n");
            }
        }else{
            if(strcmp(head->name, n) == 0){
                // pop head
                head = head->next;
                free(head->prev);
                head->prev = NULL;
            }else if(strcmp(tail->name, n) == 0){
                // pop tail
                tail = tail->prev;
                free(tail->next);
                tail->next = NULL;
            }else{
                // pop mid
                struct data *curr = head;
                while(strcmp(curr->name, n) < 0 && curr != tail){
                    curr = curr->next;
                }

                if(strcmp(curr->name, n) == 0){
                    curr->prev->next = curr->next;
                    curr->next->prev = curr->prev;
                    free(curr);
                    curr = NULL; 
                }else{
                    printf("No found data\n");
                }
            }
        }
    }
}

// print
void print(){
    if(head != NULL){
        struct data *curr = head;
        while(curr != NULL){
            printf("%s - %d \n", curr->name, curr->score);
            curr = curr->next;
        }
    }else{
        printf("No data");
    }
}

int main(){
    pushmid("a", 30);
    pushmid("b", 20);
    pushmid("d", 15);
    pushmid("c", 20);
    print();
    puts(" ");

    pophead();
    print();
    puts(" ");

    popmid("c");
    print();
    puts(" ");

    popmid("f");
    print();
    puts(" ");

    return 0;
}