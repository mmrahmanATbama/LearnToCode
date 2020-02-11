#include "pointers.h"

void pointerOpBasic(int a, int b, int* ptr)
{
    printf("Function : pointerOpBasic\n"),
    printf("pointerOpBasic: The value of ptr is %d\n",*ptr);
    printf("\n");

}
void pointerOpBasic1(int a, int b, int* ptr)
{
    printf("pointerOpBasic1: The value of ptr is %d\n",*ptr);

}
void pointerAsgn(int a, int b, int* ptr)
{
    printf("Function : pointerAsgn\n"),
    printf("PointerAsgn before assignment *ptr: %d\n",*ptr);
    printf("PointerAsgn before assignment  a  : %d\n",a);
    printf("PointerAsgn before assignment  b  : %d\n",b);

    *ptr = b;   // the value where the ptr is pointing will change, ptr is not pointing to b,
                // the value of a will change.
    printf("*ptr = b, will make value of a: %d, \tvalue of *ptr: %d\n",a,*ptr);
    // here a value will be 5, because this is a call by value, in the main, the variable
    // pointer pointing to will change to b value.So make the b value 50 here and notice the 
    // value changes in the main.
    b = 50;
    *ptr = b;
    printf("B value in the pointers.c is %d, *ptr is %d\n",b,*ptr);
    printf("\n");

}

void pointerMath(int* a,int* b,int* ptr)
{
    printf("Function : pointerMath\n"),
    printf("The value of aa %d, bb %d, *ptr %d \n",*a,*b,*ptr);
    printf("The address of aa %p \n",a);
    printf("The address of bb %p \n",b);
    printf("The address of *ptr %p \n",ptr); // The address of bb and ptr should be same.

    *a = *a + *b;  // *a should be 125
    printf("The value of a %d\n",*a);
    
    *b = *a + 1; // b should be 126
    printf("The value of b %d\n",*b);
    
    ++*a;   // the value of a will be 126 in the next line
    printf("The value of a %d\n",*a);

    printf("The value of a %d \n",(*a)++); //the value of a should be 126 , but it should increment after use
    printf("The value of a %d\n",*a);

    printf("The value of b is %d\n", *b); // should be 126 from few lines ago.
    b = a;  // b is getting the content of a, so b should be 127, another way of assigning value.
    printf("The value of b is %d\n", *b); 

    //address increment, will be useful for array
    
    printf("The address of *ptr is %p\n", ptr);
    ptr++; // increments the address by 4 bytes, since it is int type, this increment is data type dependent
    printf("The address of *ptr is %p\n", ptr);






    printf("\n");
 

}


