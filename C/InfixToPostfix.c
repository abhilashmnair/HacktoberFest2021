// Convert Infix Expression to Postfix Expression

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <limits.h>
#include <string.h>

struct stack{
    int size;
    int top;
    char *arr;
};

bool isEmpty(struct stack *stack){
    if(stack->top == -1){
        return true;
    }
    return false;
}

bool isFull(struct stack *stack){
    if(stack->top == stack->size - 1){
        return true;
    }
    return false;
}

void push(struct stack *stack, char element){
    if(isFull(stack)){
        printf("Stack Overflow!\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = element;
}

char pop(struct stack *stack){
    if(isEmpty(stack)){
        printf("Stack Underflow!\n");
        return -1;
    }
    char val = stack->arr[stack->top];
    stack->top--;
    return val;
}

int precedence(char c){
    if(c == '*' || c == '/' ){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else
        return 0;
}

bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    return false;
}

char * InfixToPostfix(char * infix){
    struct stack *st;
    st = (struct stack *) malloc(sizeof(struct stack));
    st->size = sizeof(infix);
    st->top = -1;
    st->arr = (char *) malloc(sizeof(char)*st->size);

    int i = 0; //Track Infix Travarsal
    int j = 0; // Track Postfix Travarsal
    char * postfix = (char *) malloc(sizeof(char)*(strlen(infix)+1));
    while(infix[i]!='\0') {
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i]) > precedence(st->arr[st->top])){
                push(st,infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(st);
                j++;
            }
        }
    }
    while(!isEmpty(st)){
        postfix[j] = pop(st);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char infix, *postfix;
    scanf("%s", &infix);
    postfix = InfixToPostfix(&infix);
    printf("%s", postfix);
    return 0;
}
