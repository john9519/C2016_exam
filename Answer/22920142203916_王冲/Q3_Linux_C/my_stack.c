/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include "include/my_stack.h"
#include <stdio.h>
int a[100];
int i=0;
void stack_push(int x)
{
	if(i<100)
{
	a[i]=x;
	i++;
}
}

int stack_pop()
{
	if(i>0)
	return a[i];
}

// The capacity of the stack
int stack_capacity()
{
	return 100;
}

// Current available size of the stack
int stack_size()
{
	return i;

}


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty()
{
	if(i==0）
		return 0;
	else
		return 1;

}

int stack_is_full()

{
	if(i==99）
		return 1;
	else
		return 0;

}









