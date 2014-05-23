/* Jonathan Kramer */

/* Asks the user to enter a string and the prints out the sorted string. */

#include <stdio.h>
#include <string.h>
#define MAXLEN 100

int main(void)

{

int i, j, len;
char initial;
char alpha[MAXLEN];

/***** puts input into a string *****/

printf(">  Enter a string to be alphabetized:  ");
scanf("%s", alpha);
printf("\n");

/***** gives length of string *****/

len = strlen(alpha);

/***** Makes all letter capital *****/

i=0;

while (i<len){
	if(alpha[i] > 96) {
		alpha[i] = alpha[i] - 32;
	} else {}

	i++;	
}

/***** Alphabetizes string *****/

for(i=0; i<len-1; i++)
  {
	for (j=i+1; j<len; j++)
	{
	   if (alpha[i] > alpha[j])
	   {
		 initial=alpha[i];
		 alpha[i]=alpha[j];
		 alpha[j]=initial;
	   }
	}
  }

/***** prints alphabetized string *****/

printf("%s\n\n", alpha);

return (0);

}

/*

>  Enter a string to be alphabetized:  ahgHFHSIfiha

AAFFGHHHHIIS

>  Enter a string to be alphabetized:  asdfhDHF

ADDFFHHS

*/
 