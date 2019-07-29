#include <stdio.h>
#include <stdlib.h>

// Creating the node
struct node {
    int data;
    struct node *link;
};

// Creating the top
struct node *top = NULL;

// Function defintions
void push(int);
void pop();
void peek();
void display();
int isEmpty();

int main(){
    int res, data;

    printf("Welcome to Stack :)\n");
    while(1){
        printf("1.Push\n2.Pop\n3.Top element\n4.Display\n5.Exit\n");
        printf("Enter your response(1-5): ");
        scanf("%d", &res);
        switch (res)
        {
            case 1: printf("Enter the element? ");
                    scanf("%d", &data);
                    push( data );
                    break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0); break;
            default: break;
        }
    }

    return 0;
}

int isEmpty(){
    return top == NULL ? 1 : 0;
}

void push(int data){
    struct node *new;

    new = (struct node *)malloc( sizeof( struct node) );
    new->data = data;
    new->link = top;
    top = new;
}

void pop(){
    if( isEmpty() ){
        printf("The stack is empty.\n");
    } else {
        struct node *temp;

        temp = (struct node *)malloc( sizeof( struct node) );
        temp = top;
        top = top->link;
        free(temp);

    }
}
void peek(){
    printf("The top element is %d.\n", top->data);
}

void display(){
    if( isEmpty() ){
        printf("The stack is empty.\n");
    } else {
        struct node *temp;
        temp = top;

        printf("The stack are: \n");
        while( temp != NULL){
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }
}