#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int x;
    struct node *next;
}Node;

typedef struct stack
{
    Node *top;
    Node *base;
}Stack;

void InitStack(Stack *s)
{
    s->top=NULL;
}

int stack_is_empty(Stack *s)
{
    if(s->top==NULL)
        return 1;
    else
        return 0;
}


int stack_is_full(Stack *s)
{
    if(s->top-s->base>=stack_size())
        return 1;
    else
        return 0;
}

void stack_push(Stack *s,int x)
{
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    p->x=x;
//    p->next=NULL;

        p->next=s->top;
        s->top=p;
}

int stack_size(Stack *s)
{}

int stack_capacity(Stack *s)
{}

int stack_pop(Stack *s)
{
    int data;
    Node *p;
    p=(Node *)malloc(sizeof(Node));
    if(stack_is_empty(s))
    {
        printf("the stack is empty!\n");
        free(p);
        return -1;
    }
    else
    {
        p=s->top;
        data=p->x;
        s->top=p->next;
        free(p);
        return data;
    }
}



