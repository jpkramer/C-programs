/* Jonathan Kramer */

/* Displays the size (in bytes) of the following data types on the computer engs20-1 */

#include <stdio.h>

int main(void)

{
	printf("%lu bytes for type char\n", sizeof(char));
	
	printf("%lu bytes for type short\n", sizeof(short));
	
	printf("%lu bytes for type int\n", sizeof(int));
	
	printf("%lu bytes for type unsigned\n", sizeof(unsigned));
	
	printf("%lu bytes for type long\n", sizeof(long));
	
	printf("%lu bytes for type float\n", sizeof(float));
	
	printf("%lu bytes for type double\n", sizeof(double));
	
	printf("%lu bytes for type long double\n", sizeof(long double));
	
	printf("%lu bytes for type void\n", sizeof(void));
	
	return (0);
	
}

/*
	engs20-2:~/engs20/workspace$ assignment3a
	1 bytes for type char
	2 bytes for type short
	4 bytes for type int
	4 bytes for type unsigned
	8 bytes for type long
	4 bytes for type float
	8 bytes for type double
	16 bytes for type long double
	1 bytes for type void
*/