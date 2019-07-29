#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 100

int stack[CAPACITY];
int top = -1;

void push(int);
void pop();
void peek();
void display();
int isEmpty();
int isFull();

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
    return top == -1 ? 1 : 0;
}

int isFull(){
    return top == CAPACITY -1 ? 1 : 0;
}

void push(int data){
    if( isFull() ){
        printf("The stack is full :(");
    } else{
        top = top + 1;
        stack[top] = data;
    }
}

void pop(){
    printf("The element %d is poped.\n", stack[top]);
    top = top-1;
}

void peek(){
    printf("The top element is %d.\n", stack[top]);
}

void display(){
    if( isEmpty() ){
        printf("The stack is empty.\n");
    } else {
        int i;
        printf("The stack are: \n");
        for(i= top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
        printf("\n\n");
    }
}