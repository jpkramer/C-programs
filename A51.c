/* Jonathan Kramer */

/* Displays information about variables of the following type: float, int, and char. */

#include <stdio.h>


int main(void)

{

/* Displays the number of bytes needed to store the address of the variable. */

float float1;
int int1, a, b, c;
char char1;

/* 
Do we need to assign actual values to the variables???

float1=1.5;
int1=10;
char1='x'; 
*/

a=sizeof(&float1);
b=sizeof(&int1);
c=sizeof(&char1);

printf("Need %d bytes to store the address of float1.\n", a); 
printf("Need %d bytes to store the address of int1.\n", b); 
printf("Need %d bytes to store the address of char1.\n", c);

/* Displays the hexadecimal address of the variable. */

float *ptr1;
int *ptr2;
char *ptr3;

ptr1=&float1;
ptr2=&int1;
ptr3=&char1;

printf("The hexadecimal address of float1 is %p.\n", ptr1);
printf("The hexadecimal address of int1 is %p.\n", ptr2);
printf("The hexadecimal address of char1 is %p.\n", ptr3);

/* Displays the uninitialized value of the variable. */

printf("The uninitialized value of float1 is %f.\n", float1);
printf("The uninitialized value of int1 is %d.\n", int1);
printf("The uninitialized value of char1 is %c.\n", char1);

return (0);

}

/*

engs20-2:~/engs20/workspace$ A51
Need 8 bytes to store the address of float1.
Need 8 bytes to store the address of int1.
Need 8 bytes to store the address of char1.
The hexadecimal address of float1 is 0x7fffa1d51338.
The hexadecimal address of int1 is 0x7fffa1d5133c.
The hexadecimal address of char1 is 0x7fffa1d5134f.
The uninitialized value of float1 is 0.000000.
The uninitialized value of int1 is 0.
The uninitialized value of char1 is .

*/