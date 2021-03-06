/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#define MAXSIZE 5//初始化栈的容量MAXSIZE为5,方便测试数据
int s[MAXSIZE];
int base=0,top=0;//init stack
void stack_push(int x)
{
	s[top++]=x;
}
int stack_pop()
{
	int e;
	e=s[--top];
	return e;
}
// The capacity of the stack
int stack_capacity()
{
	return MAXSIZE;
}
// Current available size of the stack
int stack_size()
{
	return top-base;
}
/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty()
{
	return base==top;
}
int stack_is_full()
{
	return stack_size()==MAXSIZE;
}
