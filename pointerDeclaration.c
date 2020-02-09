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

    printf("Data Type \tValue \tSize \tPointer \tPointer Size\n");
    printf("Char \t\t%3c\n",c);
    printf("Int \t\t%3d\n",a);
    printf("Short int \t%3hd\n",b);
    printf("Long int \t%3ld\n",d);
    printf("Float \t\t%3.2f\n",e);
    printf("Double \t%3.2lf\n",f);
    printf("Long double \t%3.0Lf\n",g);
    printf("Unsinged Char\t %c\n",c1);
    printf("Unsinged int %d\n",a1);
    printf("Unsigned short int %hu\n",b1);
    printf("Unsigned long int %lu\n",d1);

    
    return 0;

}    
