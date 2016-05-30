/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#define stacksize 100 //假定预分配的栈空间最多为100 个元素
typedef char elementtype; //假定栈元素的数据类型为字符 ,在此处可以自行设置
typedef struct
{
elementtype data[stacksize];
int top;
}seqstack;

void stack_push(int x)
{
if(s->top==stacksize -1 ) //进栈前判断栈是否已经满了
printf(" stack overflow\n");
else
{
s->top= s->top + 1;
s->data[s->top]=x;
}
}
int stack_pop()
{
if(stackempty(s)) //出栈前先判断当前栈中是否有内容
printf("stack is empty\n");
else
{
return s->data[s->top--]; //出栈后s->top的值会自减1
}
}

// The capacity of the stack
int stack_capacity()
{
return S->stacksize;
}

// Current available size of the stack
int stack_size()
{
return S->top;
}


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty()
{
if(S->top==0)
return 1;
else
return 0;
}
int stack_is_full()
{
if(S->stacksize==S->top)
return 1;
else
return 0;
}



