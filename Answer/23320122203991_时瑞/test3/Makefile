t3:         my_stack.o main.o
	    cc -o t3 my_stack.o main.o
my_stack.o: my_stack.c include/my_stack.h
	    cc -c my_stack.c
main.o:     main.c my_stack.c include/my_stack.h
	    cc -c main.c
clean:
	    rm t3 main.o my_stack.o
