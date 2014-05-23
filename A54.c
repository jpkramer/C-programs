/* Jonathan Kramer */

/* Write formatted data from my_file.txt into a new file called jonathan_file.txt */

#include <stdio.h>

int main(void)

{ 

float num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;

FILE *ifile;
FILE *ofile;

ifile = fopen("my_file.txt", "r");
ofile = fopen("jonathan_file.txt", "w");

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

fprintf(ofile, "  column1   column2   column3   column4\n"); 
fprintf(ofile, "---------------------------------------\n");
fprintf(ofile, "%9.5f %9.5f %9.5f %9.5f\n", num1, num2, num3, num4);
fprintf(ofile, "%9.5f %9.5f %9.5f %9.5f\n", num5, num6, num7, num8); 
fprintf(ofile, "%9.5f %9.5f %9.5f %9.5f\n", num9, num10, num11, num12);

fclose(ifile);
fclose(ofile);

return (0);

}

/*

engs20-2:~/engs20/workspace$ A54
engs20-2:~/engs20/workspace$ cat jonathan_file.txt
  column1   column2   column3   column4
---------------------------------------
  3.14159  55.33333  19.20000  -9.12000
 27.23456   8.50000  -0.00123 -89.99000
-13.98154 -22.22222 -88.80000   0.43021

*/