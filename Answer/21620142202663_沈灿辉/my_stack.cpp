#include"include/my_stack.h"
#include <stdlib.h>

struct Stack{
	int* stack;
	int top;
	int base;
	int size;
	int capacity;
}

void initstack(Stack &stack){
     stack = (int *)malloc(50*sizeof(int));
     stack.top=stack.base=0;
     stack.size=50;
     stack.capacity=50;
}


void stack_push(Stack &stack,int x){
        stack.stack[top++]=x;
        stack.capacity--;
}



int stack_pop(Stack &stack){
	int x;
	x=stack.stack[top--];
        stack.capacity++;
	return x;
}


int stack_capacity(Stack &stack){
	return stack.capacity;
}



int stack_size(Stack &stack){
	return stack.size;
}


int stack_is_empty(Stack &stack){
  if(stack.top==stack.base){
	return 0;
  }else{
	return 1;
}

} //0为空


int stack_is_full(Stack &stack){
   if(stack.capacity==0){
	return 1;
}else{
	return 0;
}
}//1为满，0为非满


