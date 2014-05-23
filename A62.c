/* Jonathan Kramer */

/* Reads 12 integers from the file "numbers.txt" and displays them in a table of three (3) columns */
/* REMEMBER use "getfile" command before running the program */

#include <stdio.h>
int main(void)

{

int int1, int2, int3, int4, int5, int6, int7, int8, int9, int10, int11, int12;
int sum1, sum2, sum3, sum4;
float avg1, avg2, avg3, avg4;

FILE *ifile;
ifile = fopen("numbers.txt", "r");

fscanf(ifile, "%d", &int1);
fscanf(ifile, "%d", &int2);
fscanf(ifile, "%d", &int3);
fscanf(ifile, "%d", &int4);
fscanf(ifile, "%d", &int5);
fscanf(ifile, "%d", &int6);
fscanf(ifile, "%d", &int7);
fscanf(ifile, "%d", &int8);
fscanf(ifile, "%d", &int9);
fscanf(ifile, "%d", &int10);
fscanf(ifile, "%d", &int11);
fscanf(ifile, "%d", &int12);

sum1 = (int1 + int2 + int3);
sum2 = (int4 + int5 + int6);
sum3 = (int7 + int8 + int9);
sum4 = (int10 + int11 + int12);

avg1=((int1+int4+int7+int10)/(4.));
avg2=((int2+int5+int8+int11)/(4.));
avg3=((int3+int6+int9+int12)/(4.));
avg4=((sum1+sum2+sum3+sum4)/(4.));

printf("\nt1   t2   t3   |  total\n");
printf("-----------------------\n");
printf("%d   %d   %d   |  %d\n", int1, int2, int3, sum1);
printf("%d   %d   %d   |  %d\n", int4, int5, int6, sum2);
printf("%d   %d   %d   |  %d\n", int7, int8, int9, sum3);
printf("%d   %d   %d   |  %d\n", int10, int11, int12, sum4);
printf("-----------------------\n");
printf("%.1f %.1f %.1f |  %.1f\n\n", avg1, avg2, avg3, avg4);

fclose(ifile);

return (0);

}

/*

engs20-2:~/engs20/workspace$ A62

t1   t2   t3   |  total
-----------------------
86   94   81   |  261
72   83   86   |  241
87   95   83   |  265
82   92   89   |  263
-----------------------
81.8 91.0 84.8 |  257.5

*/

