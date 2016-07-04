#ifndef _MYSTACK_H
#define _MYSTACK_H
void initstack(Stack &stack);
void stack_push(Stack &stack,int x);
int stack_pop(Stack &stack);
int stack_capacity(Stack &stack);
int stack_size(Stack &stack);
int stack_is_empty(Stack &stack); //0为空
int stack_is_full(Stack &stack)//1为满，0为非满
#endif
