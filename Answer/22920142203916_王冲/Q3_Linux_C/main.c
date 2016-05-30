#include <stdio.h>

#include "include/my_stack.h"



int main(void) {
	int x;	

void stack_push(int x);
int stack_pop();
int stack_capacity();
int stack_size();
int stack_is_empty();
int stack_is_full();


        while ( ! stack_is_full() ) {
		scanf("%d", &x);
		stack_push(x);
	}
	

	while ( !stack_is_empty() ) {
		x = stack_pop();

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
