main:main.o my_stack.o
	g++ main.o my_stack.o -o main
main.o:main.c
	g++ -c main.c
my_stack.o:my_stack.c
	g++ -c my_stack.c

clean:
	rm main *.o
