/* Jonathan Kramer */

/* prompts the user to enter an integer and diplays a message indicating whether the number is even or odd and whether it is positive, negative, or zero */

#include <stdio.h>

int main(void)
{

int integer;

/* user enters integer which is then stored in the variable "integer" */
printf("Enter an integer >", integer);
scanf("%d", &integer);

/* Provides the conditions for the 5 different situations that can occur */
if ((integer % 2 == 0) && (integer > 0 )) {
	printf("%d is an even positive number.\n", integer);
} else if ((integer % 2 == 0) && (integer < 0 )) {
	printf("%d is an even negative number.\n", integer);
} else if ((integer % 2 != 0) && (integer > 0 )) {
	printf("%d is an odd positive number.\n", integer);
} else if ((integer % 2 != 0) && (integer < 0 )) {
	printf("%d is an odd negative number.\n", integer);
} else {
	printf("%d is zero.\n", integer);
}

return(0);

}

/*

Enter an integer >6
6 is an even positive number.

Enter an integer >3
3 is an odd positive number.

Enter an integer >0
0 is zero.

Enter an integer >-2
-2 is an even negative number.

Enter an integer >-5
-5 is an odd negative number.

*/
