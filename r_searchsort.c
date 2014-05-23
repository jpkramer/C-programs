/* Jonathan Kramer */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int n , a /* counters */, search, found, holder;
int numbers[6] = {6,2,4,5,1,3};

/************************************** Searching ***************************************/

n = 0;
found = 0;

printf("Enter a number [1-6] to be searched for >>> ");
scanf("%d", &search);

while(!found && (n < 6)) {

	if (numbers[n] == search) {
		found++;
		printf("%d found at the %d element of the numbers array\n", search, n);
	}
	
	else {
		n++;
	}
}

if (!found) {
	printf("Number %d not found!", search);
}

/************************************** Sorting *****************************************/


for (a=0; a<5; a++) {

	for (n=0; n<5; n++) {

		if (numbers[n+1] < numbers[n]) {
	
			holder = numbers[n];
			numbers[n] = numbers[n+1];
			numbers[n+1] = holder;
	
		}
	}
}

for (n=0; n<6; n++) {
	printf("%d\n", numbers[n]);
}

return(0);

}