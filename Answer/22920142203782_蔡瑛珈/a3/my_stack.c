#include "include/my_stack.h"

int a[20];
int h=0;
int p=0;

void stack_push(int x)
{
a[p]=x;
p++;
}
int stack_pop()
{
p--;
return a[p+1];
}
int stack_capacity()
{
return 20-p;
}
int stack_size()
{
return 20;
}
int stack_is_empty()
{
if(p==0)
return 1;
else
return 0;
}
int stack_is_full()
{
if(p==19)
return 1;
else
return 0;
}
