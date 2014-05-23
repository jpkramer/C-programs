/* Jonathan Kramer */

/* Uses two functions to produce letters W and O and spell out WOW */

#include <stdio.h>

/* prototypes for W and O */
void letterw(void); 
void lettero(void);

int main(void)

{

/* function calls */
letterw();
lettero();
letterw();

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

engs20-2:~/engs20/workspace$ A72

 **          **
  **   **   ** 
   ****  ****  
    **    **   


     ****  
   **    **
   **    **
   **    **
     ****  


 **          **
  **   **   ** 
   ****  ****  
    **    **   
 
 */