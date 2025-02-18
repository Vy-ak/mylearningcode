#include <stdio.h>
#include <stdlib.h>

struct data {
    int number;
    struct data *next;
} *head, *tail;

// push Head
void pushHead(int num) {
    struct data *node = (struct data *)malloc(sizeof(struct data));
    node->number = num;  
    node->next = NULL;   

    if (head == NULL) {
        head = tail = node;
    } else {
        node->next = head;
        head = node;
    }
}

// push Tail
void pushTail(int num){
    struct data *node = (struct data *)malloc(sizeof(struct data));
    node->number = num;
    node->next = NULL;

    if( head == NULL){
        tail = head = node;
    }else{
        tail->next = node;
        tail = node;
    }

}


// push Mid
void pushMid(int num){
    struct data *node = (struct data *)malloc(sizeof(struct data));
    node->number  = num;
    node->next = NULL;

    if(head == NULL){
        tail = head = node;
    }else{
        if(num < head->number){
            // push Head
            node->next = head;
            head = node;
        }else if(num > tail->number){
            // push Tail
            tail->next = node;
            tail = node;
        }else{
            // push Mid
            struct data *curr = head;
            while(curr->next->number < node->number){
                curr = curr->next;
            }

            node->next = curr->next;
            curr->next = node; 

        }
    }
}

// pop Head
void popHead(){
    if(head != NULL){
        if(head == tail){
            free(head);
            head = tail = NULL;
        }else{
            struct data *curr = head;
            head = curr->next;
            free(curr);
            curr = NULL;
        }
    }
}

// pop tail
void popTail(){
    if (head != NULL){
        if(head == tail){
            free(head);
            head = tail = NULL;
        }else{
            struct data *curr = head;
            while(curr->next != tail){
                curr = curr->next;
            }

            tail = curr;
            free(tail->next);
            tail->next = NULL;

        }
    }
}

// pop all
void popAll(){
    while(head != NULL){
        popHead();
    }
}

// pop mid
void popMid(int num){
    if(head != NULL){
        if(head == tail){
            if(num == head->number){
                free(head);
                head = tail = NULL;
            }else{
                printf("Data is not found\n");
            }
        }else{
            if(num == head->number){
                struct data *curr = head;
                head = curr->next;
                free(curr);
                curr = NULL;
            }else if(num == tail->number){
                struct data *curr = head;
                while(curr->next != tail){
                    curr = curr->next;
                }

                tail = curr;
                free(tail->next);
                tail->next = NULL;

            }else{
                struct data *curr = head;
                while(curr->next->number < num && curr->next != tail){
                    curr = curr->next;
                }

                if(curr->next->number == num){
                    struct data *del = curr->next;
                    curr->next = del->next;
                    free(del);
                    del = NULL;
                }else{
                    printf("%d is not found\n", num);
                }
                
            }
        }
    }
}


void print() {
    if (head != NULL) {
        struct data *curr = head;
        while (curr != NULL) {
            printf("%d ", curr->number);
            curr = curr->next;
        }
    } else {
        printf("Data is NULL\n");
    }
}

int main() {

    /*
    pushHead(5);
    pushHead(20);
    pushHead(10);

    print();
    printf("\n");

    pushTail(15);
    pushTail(25);
    print();
    printf("\n");
    */

   pushMid(50);
   pushMid(10);
   pushMid(90);
   pushMid(1);
   pushMid(0);
   print();
   printf("\n");

   popHead();
   print();
   printf("\n");

   popTail();
   print();
   printf("\n");

//    popAll();
//    print();
//    printf("\n");

   popMid(1000);
   print();
   printf("\n");


    return 0;
}