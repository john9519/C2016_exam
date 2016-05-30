#ifndef _MY_STACK_H
#define _MY_STACK_H
#include<iostream>
using namespace std;

typedef struct Stack
{
	int data[100];
	int top,size;
}Stack;
void stack_push(Stack &s,int x);
int stack_pop(Stack &s);

// The capacity of the stack
int stack_capacity(Stack s);

// Current available size of the stack
int stack_size(Stack s);


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(Stack s);
int stack_is_full(Stack s);


#endif //_MY_STACK_H
