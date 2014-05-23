/* Jonathan Kramer */

/* asks the user for a positive integer and displays one of the letters from SA #7 that many times */

#include <stdio.h>

/* prototypes for W and O */
void letterw(void); 
void lettero(void);

int main(void)

{

int num, i;

i=1;

/* Makes sure user enters a positive number */
printf("Enter a positive integer > "); 
scanf("%d", &num);

while (num < 0) {
	printf("Negative number, try again > ");
	scanf("%d", &num);
}

/* prints letter w "num" times if "num" is even */
if (num%2 == 0) {
	while (i <= num) {
	letterw();
	i++;
	}
}

/* prints letter o "num" times if "num" is odd */
else {
	while (i <= num) {
	lettero();
	i++;
	}	
}
return (0);

}

/* function definition for letter W */
void letterw(void)

{

printf(" **          **\n");
printf("  **   **   ** \n");
printf("   ****  ****  \n");
printf("    **    **   \n\n\n");

}

/* function definition for letter O */
void lettero(void)

{

printf("     ****  \n");
printf("   **    **\n");
printf("   **    **\n");
printf("   **    **\n");
printf("     ****  \n\n\n");

}

/*

Enter a positive integer > -5
Negative number, try again > 1        
     ****  
   **    **
   **    **
   **    **
     ****  


engs20-2:~/engs20/workspace$ A91
Enter a positive integer > 2
 **          **
  **   **   ** 
   ****  ****  
    **    **   


 **          **
  **   **   ** 
   ****  ****  
    **    **   


engs20-2:~/engs20/workspace$ A91
Enter a positive integer > 3
     ****  
   **    **
   **    **
   **    **
     ****  


     ****  
   **    **
   **    **
   **    **
     ****  


     ****  
   **    **
   **    **
   **    **
     ****  

*/