#target: dependencies
#	action
#

a: pointerDeclaration.o
	gcc pointerDeclaration.o -o a

pointerDeclaration.o: pointerDeclaration.c
	gcc -c -Wall pointerDeclaration.c

clean:
	rm *.o a
