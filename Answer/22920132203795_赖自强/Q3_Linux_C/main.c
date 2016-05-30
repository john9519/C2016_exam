#include <stdio.h>

#include "my_stack.h"

int main(void) {
	int x;	
	stack_init();
        while ( ! stack_is_full() ) {
		printf("input x:");
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
