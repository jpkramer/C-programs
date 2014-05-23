/* Jonathan Kramer */

/* Finds the mean test grade for midterm 1 */

#include <stdio.h>

int main(void)
{

int score, total, i;
float avg;

FILE *ifile;

ifile = fopen("scores.txt", "r");

total=i=0;

while (fscanf(ifile, "%d", &score) != EOF) {
	i++;
	total += score; 
}
	
avg = total/((float)i);

printf("\nAverage score was %f\n\n", avg);

return (0);

}

/*

Average score was 74.480003

*/