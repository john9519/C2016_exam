/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */


#include <stdio.h>
#include "include/my_stack.h"
#define STACK_INIT_SIZE 10
#define STACKINCREMENT 2


typedef struct SqStack
 {
  SElemType *base; 
  SElemType *top;
  int stacksize; 
 }SqStack;

Status InitStack(SqStack *S)
{
  (*S).base=(SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
  if(!(*S).base)
   exit(OVERFLOW); 
  (*S).top=(*S).base;
  (*S).stacksize=STACK_INIT_SIZE;
  return OK;
}



int stack_is_empty()
{
   if(s.top=s.base)
       return 1;
   else 
       return 0;
}
int stack_is_full()
{
   if(s.top==STACK_INIT_SIZE)
       return 1;
   else
       return 0;
}

void stack_push(int x)
{
      if(!stack_is_full())
         s[top++]=x;
      else 
         return error;
}
int stack_pop()
{

       int e;
       if(!stack_is_empty())
          e=s[--top];
          return e;
       else
          return error;
}

int stack_capacity()
{
      return 10-s.top;
}

int stack_size()
{
     
   
      return s.top-s.base;
}

