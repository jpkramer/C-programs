/* Jonathan Kramer */

/* Write a program which reads the numbers from one of the longer assignment files into an array. Using the array, compute the average, standard deviation, minimum and maximum of the numbers in the file. */

/* Remember to use getfile before running program! */

/*********************************** Header Files **************************************/

#include <stdio.h>
#include <math.h>

float average(int, const int*);
float standard_dev(int, const int*, float);
int minimum(int, const int*);
int maximum(int, const int*);

int main(void)

{

/************************************* Variables ***************************************/

/* k will act as a counter. REMEMBER to reinitialize it to 0 */

int i, score, minscore, maxscore;     
int scores[100];
float avg, stdv;
char filename[20];
FILE *file;

/********************* Ask user which file using string variable ***********************/

printf("Enter a file name >>> ");
scanf("%s", filename);
printf("\n\n");
file = fopen(filename, "r");

/****************************** Reading scores to array ********************************/

i=0;

while (fscanf(file, "%d", &score) != EOF) {

	scores[i] = score;
	i++;  /* i is now also the number of scores in the array */
	
}

/************************************ Function Calls ***********************************/

avg = average(i, scores);
stdv = standard_dev(i, scores, avg);
minscore = minscore = minimum(i, scores);
maxscore = maxscore = maximum(i, scores);

/************************************* Printing ****************************************/

printf("The average of the values in this file is %f.\n\n", avg);
printf("The standard deviation of the values in this file is %f.\n\n", stdv);
printf("The minimum score of the values in this file is %d.\n\n", minscore);
printf("The maximum score of the values in this file is %d.\n\n", maxscore);

/***************************************************************************************/

return (0);

}

/***************************************************************************************/
/********************************* Function Definitions ********************************/
/***************************************************************************************/

/********************************* Computing average ***********************************/

float average(int i, const int scores[])
{

int k, total;
float avg;

total=0;
k=0; 

while (k < i) {

	total += scores[k];
	k++;
}

avg = (float)total/i;

return(avg);

}

/********************************* Standard deviation **********************************/

float standard_dev(int i, const int scores[], float avg)
{

int k;
float sigdif, sigdif_sq, sigdif_sq_sum, stdv;

sigdif_sq_sum = 0;
k=0; 

while (k < i) {

	sigdif = scores[k] - avg;
	sigdif_sq = sigdif * sigdif;
	sigdif_sq_sum += sigdif_sq;
	k++;
}

stdv = sqrt((1/((float)i-1)) * sigdif_sq_sum);

return(stdv);

}

/********************************** Minimum Value **************************************/

int minimum(int i, const int scores[])
{

int k, minscore;

minscore = 101;
k = 0;

while (k < i) {

	if (scores[k] <= minscore) {
		minscore = scores[k];
	} else {
		minscore = minscore;
	}
	k++;
}

return(minscore);

}

/********************************** Maximum Value **************************************/

int maximum(int i, const int scores[])
{

int k, maxscore;

maxscore = 0;
k = 0;

while (k < i) {

	if (scores[k] >= maxscore) {
		maxscore = scores[k];
	} else {
		maxscore = maxscore;
	}
	k++;
}

return(maxscore);

}

/***************************************************************************************/

/*

Enter a file name >>> group1.txt


The average of the values in this file is 85.440681.

The standard deviation of the values in this file is 8.156384.

The minimum score of the values in this file is 64.

The maximum score of the values in this file is 99.

*/


