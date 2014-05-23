/* Jonathan Kramer */

/* Adds two characters together and displays the resulting character. */

#include <stdio.h>

int main(void)

{

/* defines char1, char2, and character as being character data types. */
 	char char1, char2, character;
 	
 	char1 = '1';
 	char2 = '2';
	
	character = char1 + char2;
	
	printf("1 + 2 = %c.\n", character);
	
	return (0);
	
}

/* 
engs20-2:~/engs20/workspace$ A42
1 + 2 = c.
*/