// under construction. Remove this line when it is no longer under construction. 
/*
 * Pointer in c. This program shows how to declare, assign and dereference pointers
 */
 
// add array, structure, function also one section 1

#include "pointers.h"

int main()
{
//1: C data type and pointer declartions. 
//Declare in main, print in main.


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


// Section 2: pointer assignment, address arithmatic, increment etc. 
// use header file to do the above task. 
// Works as a reference for basic level header file.
// declare variables here, define function in pointers.h and implement in pointers.c
// assign a pointer address
// change the value using a different variable and pointer
// increment value using dereference
// increment address pointer
 


    return 0;
} 

/*
Section 1 output
Data Type 	    Value 	Size 		Pointer 	Pointer Size
Char 		       a 	 1 	 0x7fff75ad7c2f 	  8
Int 		       0 	 4 	 0x7fff75ad7c28 	  8
Short int 	       0	 2 	 0x7fff75ad7c26 	  8
Long int 	       0	 8 	 0x7fff75ad7c18 	  8
Float 		       0.00	 4 	 0x7fff75ad7c14 	  8
Double 		       0.00	 8 	 0x7fff75ad7c08 	  8
Long double 	   0.00	16 	 0x7fff75ad7bf0 	  8
Unsinged Char	   a	 1 	 0x7fff75ad7bef 	  8
Unsinged int 	   0	 4 	 0x7fff75ad7be8 	  8
Unsigned short int 0	 2 	 0x7fff75ad7be6 	  8
Unsigned long int  0	 8 	 0x7fff75ad7bd8 	  8

*/ 
