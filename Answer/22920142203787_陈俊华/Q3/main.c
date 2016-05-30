#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
	int x;	
	Stack s;
	s.top=0;
	s.size=5;
        while ( ! stack_is_full(s) ) {
		scanf("%d", &x);
		stack_push(s,x);
	}
	

	while ( !stack_is_empty(s) ) {
		x = stack_pop(s);

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
