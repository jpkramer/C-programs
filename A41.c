/* Jonathan Kramer */

/* Displays the number of bytes needed to store some positive integer on the computer that you are using */

#include <stdio.h>

int main(void)

{

/* declares "integer" as being an unsigned integer */
 	unsigned integer, num;
	
	printf("Enter some positive integer > ");
	scanf("%u",&integer);
	num = integer * sizeof(int);
	printf("Need %u bytes\n", num);
	
	return (0);
	
}

/* 

engs20-2:~/engs20/workspace$ A41
	*Enter some positive integer > 1
	*Need 4 bytes
engs20-2:~/engs20/workspace$ A41
	*Enter some positive integer > 2
	*Need 8 bytes
engs20-2:~/engs20/workspace$ A41
	*Enter some positive integer > 3
	*Need 12 bytes
engs20-2:~/engs20/workspace$ A41
	*Enter some positive integer > 943939
	*Need 3775756 bytes

*/