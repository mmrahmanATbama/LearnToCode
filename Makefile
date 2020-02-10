#target: dependencies
#	action
#

a: pointerDeclaration.o pointers.o 
	gcc -Wall pointerDeclaration.o pointers.o -o a

pointerDeclaration.o: pointerDeclaration.c
	gcc -c -Wall pointerDeclaration.c
pointers.o: pointers.c pointers.h
	gcc -c -Wall pointers.c

clean:
	rm *.o a
