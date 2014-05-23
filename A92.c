/* Jonathan Kramer */

/* asks the user to enter an integer and prints a “square” of symbols that is that many rows and columns */

#include <stdio.h>

int main(void)

{

int num, i, j;

i=1;
j=1;

/* Makes sure user enters a positive number */
printf("Enter a positive integer > "); 
scanf("%d", &num);

while (num < 0) {
	printf("Negative number, try again > ");
	scanf("%d", &num);
}
/* produces "num" rows of "num" asterisks each */
 
for (i=1; i <= num; i++) {
	printf("*");
	 
 	for (j=1; j < num; j++) {
 		printf("*");
 	}
 printf("\n");
 
}

return (0);

}

/*

Enter a positive integer > 3
***
***
***
engs20-2:~/engs20/workspace$ A92
Enter a positive integer > 6
******
******
******
******
******
******
engs20-2:~/engs20/workspace$ A92
Enter a positive integer > 8
********
********
********
********
********
********
********
********

*/