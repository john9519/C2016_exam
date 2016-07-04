/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include <stdio.h>
#include "include/my_stack.h"


void stack_push(int x)
{
	S.data[S.top++] = x;
}

int stack_pop()
{
	return S.data[--S.top];	
}

int stack_capacity()
{
	return S.stacksize;
}

int stack_size()
{
	return S.stacksize-S.top;
}

int stack_is_empty()
{
	if(S.top == 0)
		return 1;
	else
		return 0;
}

int stack_is_full()
{
	if(S.top < S.stacksize)
		return 0;
	else
		return 1;
}

