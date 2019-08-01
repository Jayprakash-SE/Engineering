#include <stdio.h>
#include <stdlib.h>

// Creating the node
struct node {
    int data;
    struct node *next;
    struct node *pre;
};

// Creating the Head
struct node *head=NULL;

// Function prototype
void insertAtHead(int);
void insertAtTail(int);
void display();
void displayReverse();
void isEmpty();

int main( void ) {
    int res, data;

    printf("Welcome to Doubly Linked List :)\n");
    while(1){
        printf("\n\n1.Add Node at Head\n2.Add Node at Tail\n3.Display\n4.Display in Reverse\n5.Exit\n");
        printf("Enter your response(1-4): ");
        scanf("%d", &res);
        switch (res)
        {
            case 1: printf("Enter the element to add at Head? ");
                    scanf("%d", &data);
                    insertAtHead( data );
                    break;
            case 2: printf("Enter the element to add at Tail? ");
                    scanf("%d", &data);
                    insertAtTail( data );
                    break;
            case 3: display(); break;
            case 4: displayReverse(); break;
            case 5: exit(0); break;
            default: break;
        }
    }

    return 0;
}

void insertAtHead( int data ){
    struct node *newNode;

    newNode = (struct node *)malloc( sizeof(struct node) );
    newNode->data = data;
    newNode->next = NULL;
    newNode->pre = NULL;

    if( isEmpty() ){
        head = newNode;
    } else {
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
    }
}

void insertAtTail(int data){
    struct node *newNode, *temp;

    newNode = (struct node *)malloc( sizeof(struct node) );
    newNode->data = data;
    newNode->next = NULL;
    newNode->pre = NULL;

    if( isEmpty() ){
        printf("The list is empty. Create node at Head first!");
        return;
    } else {
        temp = head;
        while ( temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->pre = temp;
    }
    
}

void display(){
    struct node *temp;

    temp = head;
    while ( temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");   
}

void displayReverse(){
    struct node *temp;

    temp = head;

    if( isEmpty() ) {
        printf("The list is empty :(");
    } else {
        while ( temp->next != NULL)
            temp = temp->next;

        printf("NULL");
        while ( temp != NULL)
        {
            printf(" <- %d ", temp->data);
            temp = temp->pre;
        }
    }
}

void isEmpty(){
    return head == NULL ? 1 : 0;
}