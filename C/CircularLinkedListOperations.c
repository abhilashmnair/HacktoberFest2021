// Created a Circular Linked List and defined all the major operations using various methods

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node * insert_at_beginning(struct Node *head, int element){
    struct Node *node_to_insert = (struct Node *)malloc(sizeof(struct Node));
    node_to_insert->data = element;

    struct Node *p = head;
    struct Node *q = head;

    while(q->next != head){
        q = q->next;
    }

    q->next = node_to_insert;
    node_to_insert->next = p;

    return node_to_insert;
}

struct Node * insert_at_end(struct Node *head, int element){
    struct Node *node_to_insert = (struct Node *)malloc(sizeof(struct Node));
    node_to_insert->data = element;

    struct Node *p = head;
    struct Node *q = head;

    while(q->next != head){
        q = q->next;
    }

    q->next = node_to_insert;
    node_to_insert->next = p;

    return head;
}

void display_CircularLinkedList(struct Node *ptr){
    struct Node *p = ptr;
    do{
        printf("%d ",p->data);
        p = p->next;
    }while(p != ptr);
}

int main(){
    
    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    struct Node *node_second = (struct Node*) malloc(sizeof(struct Node));
    struct Node *node_third = (struct Node*) malloc(sizeof(struct Node));
    struct Node *node_fourth = (struct Node*) malloc(sizeof(struct Node));

    head->data = 1;
    head->next = node_second;

    node_second->data = 2;
    node_second->next = node_third;

    node_third->data = 3;
    node_third->next = node_fourth;

    node_fourth->data = 4;
    node_fourth->next = head;

    printf("Original Cirular Linked List\n");
    display_CircularLinkedList(head);
    printf("\n");

    head = insert_at_beginning(head, 100);
    printf("Insert at beginning of Cirular Linked List\n");
    display_CircularLinkedList(head);
    printf("\n");

    head = insert_at_end(head, 200);
    printf("Insert at end of Cirular Linked List\n");
    display_CircularLinkedList(head);
    printf("\n");


    return 0;
}
