// pointers.h header file. Notice the ifndef and define, adding .h extension here gets compiler warning

#ifndef pointers
#define pointers
#include<stdio.h>

// pointer declaration, assignment, dereference example

void pointerOpBasic(int a, int b, int* ptr); // example of passing parameters
void pointerOpBasic1(int , int ,int*);
void pointerAsgn(int, int , int*);         // change pointers value using assignment
void pointerMath(int*,int*,int*);         //  pointer address arithmatic example
#endif
