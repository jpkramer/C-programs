/* Jonathan Kramer */

#include <stdio.h>
#include <stdlib.h>

void totalvalue(int n, int *total, const int values[]);

int main(void)
{

int n, a, total;


printf("Enter a number of values [1s] >>> ");
scanf("%d", &n);
printf("\n\n");

int *numbers;

numbers = (int *)malloc(n * sizeof(int));

for (a=0; a<n; a++) {

	numbers[a] = 1;
	
}

totalvalue(n, &total, numbers);

for (a=0; a<n; a++) {
	printf("%d\n", numbers[a]);
}

printf("%d\n", total);

return(0);

}

void totalvalue(int n, int *total, const int values[])
{
	int a=0;
	*total = 0;
	
	for (a=0; a<n; a++) {
		
		*total += values[a];
		
	}
}