#include "pointers.h"

void pointerOpBasic(int a, int b, int* ptr)
{
    printf("pointerOpBasic: The value of ptr is %d\n",*ptr);

}
void pointerOpBasic1(int a, int b, int* ptr)
{
    printf("pointerOpBasic1: The value of ptr is %d\n",*ptr);

}
void pointerAsgn(int a, int b, int* ptr)
{
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

}
