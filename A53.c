/* Jonathan Kramer */

/*

Reads in 12 real (floating point) numbers from the file (my_file.txt) and displays them to 
the screen in tabular fashion, specifically in four columns.

*/

#include <stdio.h>

int main(void)

{ 

float num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;

FILE *ifile;

ifile = fopen("my_file.txt", "r");

fscanf(ifile, "%f", &num1);
fscanf(ifile, "%f", &num2);
fscanf(ifile, "%f", &num3);
fscanf(ifile, "%f", &num4);
fscanf(ifile, "%f", &num5);
fscanf(ifile, "%f", &num6);
fscanf(ifile, "%f", &num7);
fscanf(ifile, "%f", &num8);
fscanf(ifile, "%f", &num9);
fscanf(ifile, "%f", &num10);
fscanf(ifile, "%f", &num11);
fscanf(ifile, "%f", &num12);

printf("  column1   column2   column3   column4\n"); 
printf("---------------------------------------\n");
printf("%9.5f %9.5f %9.5f %9.5f\n", num1, num2, num3, num4);
printf("%9.5f %9.5f %9.5f %9.5f\n", num5, num6, num7, num8); 
printf("%9.5f %9.5f %9.5f %9.5f\n", num9, num10, num11, num12);

return (0);

}

/*

engs20-2:~/engs20/workspace$ A53
  column1   column2   column3   column4
---------------------------------------
  3.14159  55.33333  19.20000  -9.12000
 27.23456   8.50000  -0.00123 -89.99000
-13.98154 -22.22222 -88.80000   0.43021

*/