#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
	int x;	

	S.top = 0;
	S.stacksize = 7;

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
