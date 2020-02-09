/*
 * Pointer in c. This program shows how to declare, assign and dereference pointers
 */
 

#include<stdio.h>


int main()
{
// C data type and pointer declartions.


    char c = 'a';
    int  a = 0;
    short int b = 0;
    long int  d = 0;
    float e = 0.0;
    double f = 0.0;
    long double g = 0.0;
    unsigned char c1 = 'a';
    unsigned int a1 = 0;
    unsigned short int b1 = 0;
    unsigned long int  d1 = 0;
    //unsigned float e1 = 0.0;      // error, unsigned float, double
    //unsigned double f1 = 0.0 ;    // long double
    //unsigned long double g1 = 0.0;

    printf("Char %c\n",c);
    printf("Int %d\n",a);
    printf("Short int %d\n",b);
    printf("Long int %d\n",d);
    printf("float %f\n",e);
    printf("double %f\n",f);
    printf("long double %f\n",g);
    printf("Unsinged Char %c\n",c1);
    printf("unsinged int %d\n",a1);
    printf("unsigned short int %d\n",b1);
    printf("unsigned long int %d\n",d1);

    
    return 0;

}    
