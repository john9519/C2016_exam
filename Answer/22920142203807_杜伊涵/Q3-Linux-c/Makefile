main:my_stack.o main.o
	gcc my_stack.o main.o -o main
my_stack.o:
	gcc -c my_stack.c
main.o:
	gcc -c main.c
clean:
	if [ -e main ];then rm main;fi
	rm *.o

