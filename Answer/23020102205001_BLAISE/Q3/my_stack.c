#include <stdio.h>
#include "include/my_stack.h"

#define STACK_SIZE 100
 
int N, ERROR;
int stack[STACK_SIZE]; 
void stack_push(int x)
 {
 	if(N==STACK_SIZE)
 		return;
 	else
 		stack[N++]=x;
 }
 
 
int stack_pop()
 {
 	if(N==0)
 		return ERROR;
 	else
 		return stack[N--];
 }
 
 
int stack_capacity()
 {
 	return STACK_SIZE;
 }
 
 
int stack_size()
 {
 return N;
 }
 
 
int stack_is_empty()
 {
 if(N==0)
 return 1;
 else
 return 0;
 }
 
 
int stack_is_full()
 {
 	if(N==STACK_SIZE)
 return 1;
 else
 return 0;
 
}

