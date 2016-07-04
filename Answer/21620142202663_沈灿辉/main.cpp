#include<stdio.h>
#include"include/my_stack.h"

int main(){
   Stack stack;
   initstack(stack);
   stack_push(stack,1);
   printf("%d",stack_capacity(stack)) ;
   printf("%d",stack_size(stack)) ;
   printf("%d",stack_empty(stack)) ;
   printf("%d",stack_full(stack)) ;
}
