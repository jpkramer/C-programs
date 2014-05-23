/* Jonathan Kramer */

/*

Asks the user to enter 4 numbers and displays them in the following formats:

  -22.123400 100.000000
  2.732220 -99.922997
  
    -22.1234   100.0000
      2.7322   -99.9230
      
  -000022.12 +000100.00
  +000002.73 -000099.92

*/

#include <stdio.h>

int main(void)

{ 

float num1, num2, num3, num4;

printf("Enter first number.\n>", num1);
scanf("%f",&num1);

printf("Enter second number.\n>", num2);
scanf("%f",&num2);

printf("Enter third number.\n>", num3);
scanf("%f",&num3);

printf("Enter fourth number.\n>", num4);
scanf("%f",&num4);

printf("\n%.6f %.6f\n%.6f %.6f\n\n", num1, num2, num3, num4);
printf("%8.4f %8.4f\n%8.4f %8.4f\n\n", num1, num2, num3, num4);
printf("%0+10.2f %0+10.2f\n%0+10.2f %0+10.2f\n\n", num1, num2, num3, num4);

return (0);

}

/*

engs20-2:~/engs20/workspace$ A52
Enter first number.
>-25.5
Enter second number.
>200
Enter third number.
>3.756
Enter fourth number.
>-95.6

-25.500000 200.000000
3.756000 -95.599998

-25.5000 200.0000
  3.7560 -95.6000

-000025.50 +000200.00
+000003.76 -000095.60

*/