/* Jonathan Kramer */

/* counts the numbers in the file big_file.txt */

#include <stdio.h>

int main(void)

{
    
int num, i, j, k, spaces, stars;
    
/* Makes sure user enters a positive odd number */
printf("Enter a positive odd integer > ");
scanf("%d", &num);
    
while ((num < 0) || (num%2 == 0)) {
    printf("Number must be positive and odd, please try again > ");
    scanf("%d", &num);
}

printf("\n");

for (i=0; i <= ((num-1)/2); i++) {
         
    for (j=0; j <= ((num-2*(i)-1)/2); j++) {
 		printf(" ");
 	}
 	for (k=0; k <= 2*(i); k++) {
 		printf("*");
 	}
 	printf("\n");
    }

printf("\n");

    return (0);
    
}

/*

Enter a positive odd integer > 1
 *

Enter a positive odd integer > 3
  *
 ***

Enter a positive odd integer > 5
   *
  ***
 *****

Enter a positive odd integer > 7
    *
   ***
  *****
 *******

Enter a positive odd integer > 9
     *
    ***
   *****
  *******
 *********

Enter a positive odd integer > -8
Number must be positive and odd, please try again > 11
      *
     ***
    *****
   *******
  *********
 ***********

*/