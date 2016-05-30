#define  StackSize  5    
#define TRUE  1
#define FALSE 0
int stack[5];
int top=0;
int end=0;

int stack_is_empty()
{  
	if(top==end)              
    	return TRUE;
	else
    	return FALSE;
}

int stack_is_full()
{
	if(top==StackSize)
		return TRUE;
	else
		return FALSE;
}

void stack_push(int x)
{
	stack[top]=x;
	top++;
}

int stack_pop()
{
	top--;
	return stack[top];
}
int stack_capacity()
{
	return StackSize;
}
int stack_size()
{
	return StackSize;
}
