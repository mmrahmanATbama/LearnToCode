#target: dependencies
#	action
#

a: pointerDeclaration.o
	gcc pointerDeclaration.o pointers.h -o a

pointerDeclaration.o: pointerDeclaration.c pointers.h
	gcc -c -Wall pointerDeclaration.c

clean:
	rm *.o a
