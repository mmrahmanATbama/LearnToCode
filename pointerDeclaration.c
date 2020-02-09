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

    printf("Data Type \tValue \tSize \t\tPointer \tPointer Size\n");
    printf("Char \t\t%4c \t%2lu \t %p \t%3lu\n",c,sizeof(c),&c,sizeof(&c));
    printf("Int \t\t%4d \t%2lu \t %p \t%3lu\n",a,sizeof(a),&a,sizeof(&a));
    printf("Short int \t%4hd\t%2lu \t %p \t%3lu\n",b,sizeof(b),&b,sizeof(&b));
    printf("Long int \t%4ld\t%2lu \t %p \t%3lu\n",d,sizeof(d),&d,sizeof(&d));
    printf("Float \t\t%3.2f\t%2lu \t %p \t%3lu\n",e,sizeof(e),&e,sizeof(&e));
    printf("Double \t\t%3.2lf\t%2lu \t %p \t%3lu\n",f,sizeof(f),&f,sizeof(&f));
    printf("Long double \t%3.2Lf\t%2lu \t %p \t%3lu\n",g,sizeof(g),&g,sizeof(&g));
    printf("Unsinged Char\t %3c\t%2lu \t %p \t%3lu\n",c1,sizeof(c1),&c1,sizeof(&c1));
    printf("Unsinged int \t%4d\t%2lu \t %p \t%3lu\n",a1,sizeof(a1),&a1,sizeof(&a1));
    printf("Unsigned short int %hu\t%2lu \t %p \t%3lu\n",b1,sizeof(b1),&b1,sizeof(&b1));
    printf("Unsigned long int %2lu\t%2lu \t %p \t%3lu\n",d1,sizeof(d1),&d1,sizeof(&d1));

    
    return 0;

}    
