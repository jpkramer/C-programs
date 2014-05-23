/* Jonathan Kramer */

/* prompts the user to enter a character corresponding to one of the solar flare categories (b,c,m, or x) and print the intensity range for that flare category. */

#include <stdio.h>

int main(void)
{

char category;

printf("Enter a solar flare category >", category); 
scanf("%c", &category);

/* switch statement that accounts for each category for both uppercase and lowercase inputs */

switch (category) {
	case 'b':
		printf("10^−7 <= I < 10^−6 is the intensity range for B\n");
		break;	
	case 'B':
		printf("10^−7 <= I < 10^−6 is the intensity range for B\n");
		break;
	case 'c':
		printf("10^−6 <= I < 10^−5 is the intensity range for C\n");
		break;		
	case 'C':
		printf("10^−6 <= I < 10^−5 is the intensity range for C\n");
		break;	
	case 'm':
		printf("10^−5 <= I < 10^−4 is the intensity range for M\n");
		break;	
	case 'M':
		printf("10^−5 <= I < 10^−4 is the intensity range for M\n");
		break;
	case 'x':
		printf("I >= 10−4 is the intensity range for X\n");
		break;	
	case 'X':
		printf("I >= 10−4 is the intensity range for X\n");
		break;				
	default:
		printf("%c is an unidentified flare category\n", category);
}
		
return (0);

}

/*

Enter a solar flare category >B
10^−7 <= I < 10^−6 is the intensity range for B

Enter a solar flare category >b
10^−7 <= I < 10^−6 is the intensity range for B

Enter a solar flare category >C
10^−6 <= I < 10^−5 is the intensity range for C

Enter a solar flare category >c
10^−6 <= I < 10^−5 is the intensity range for C

Enter a solar flare category >M
10^−5 <= I < 10^−4 is the intensity range for M

Enter a solar flare category >m
10^−5 <= I < 10^−4 is the intensity range for M

Enter a solar flare category >X               
I >= 10−4 is the intensity range for X

Enter a solar flare category >x
I >= 10−4 is the intensity range for X

Enter a solar flare category >A
A is an unidentified flare category

Enter a solar flare category >a
a is an unidentified flare category

*/
