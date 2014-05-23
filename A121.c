/* Jonathan Kramer */

/* Asks the user to enter a string and then displays the string in the form of a cheer. */

#include <stdio.h>
#include <string.h>
#define MAXLEN 100

char capital(int lensf, char sloganf[]);

int main(void)
{

int i, len;
char slogan[MAXLEN];

/***** puts entered slogan into a string *****/

printf("> Enter a slogan:  ");
scanf("%s", slogan);
printf("\n\n");

/***** gives length of string *****/

len = strlen(slogan);

/***** prints first part of cheer *****/

i=0;

while (i<len) {
	printf("Give me a ... %c\n", slogan[i]);
	i++;
}

printf("\n\n");

/***** Makes all letter capital *****/

capital(len, slogan);

/***** prints second part of cheer *****/

printf("What does that spell?! %s!\n\n", slogan); 

return (0);

}

char capital(int lenf, char sloganf[])
{
	int j;
	j=0;

	while (j<lenf){
		if(sloganf[j] > 96) {
			sloganf[j] = sloganf[j] - 32;
		} else {}
		
		j++;	
	}
	
	return(sloganf);
}

/*

> Enter a slogan:  Dartmouth


Give me a ... D
Give me a ... a
Give me a ... r
Give me a ... t
Give me a ... m
Give me a ... o
Give me a ... u
Give me a ... t
Give me a ... h


What does that spell?! DARTMOUTH!

> Enter a slogan:  Engs20


Give me a ... E
Give me a ... n
Give me a ... g
Give me a ... s
Give me a ... 2
Give me a ... 0


What does that spell?! ENGS20!

*/