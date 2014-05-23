/* Jonathan Kramer */

/*

Write a C program that asks the user to enter a positive integer and displays: 
the number,
the square of the number, 
the cube of the number, 
the square root of the number, 
the exponential of the number, 
the natural logarithm of the number 
the logarithm of the number (base-10).

*/

#include <stdio.h>
#include <math.h>

int main(void)

{

int num;
float xnumber, xsquare, xcube, xsqrt, xexp, xln, xlog;

printf("Enter a positive number: ",num);
scanf("%d", &num);

xnumber = num;
xsquare = num*num;
xcube = num*num*num;
xsqrt = sqrt(num);
xexp = exp(num);
xln = log(num);
xlog = log10(num);

printf("number  %.6f\n", xnumber);
printf("square  %.6f\n", xsquare);
printf("cube    %.6f\n", xcube);
printf("sqrt    %.6f\n", xsqrt);
printf("exp     %.6f\n", xexp);
printf("ln      %.6f\n", xln);
printf("log     %.6f\n", xlog);

return (0);

}

/*

engs20-2:~/engs20/workspace$ A63

Enter a positive number: 7
number  7.000000
square  49.000000
cube    343.000000
sqrt    2.645751
exp     1096.633179
ln      1.945910
log     0.845098

*/
