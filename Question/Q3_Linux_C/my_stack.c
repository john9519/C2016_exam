/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include<stdio.h>
typedef struct {
	int head;
	int buf[10];
	int max;
}Stack;

Stack stack;

void stack_init()
{
	stack.head=0;
	stack.max=10;
}

void stack_push(int x)
{
	stack.buf[stack.head]=x;	
	stack.head++;
}

int stack_pop()
{
	if(stack.head<0)
	{	printf("stack is empty");
		return -1;
	}
	else{
		return stack.buf[stack.head];
		stack.head--;
	}
}

int stack_size()
{
	return stack.max;
}

int stack_is_empty()
{
	if(stack.head<=0)
		return 1;
	else
		return 0;
}

int stack_is_full()
{
	if(stack.head>=stack.max)
		return 1;
	else
	 	return 0;
}


