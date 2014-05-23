/* Jonathan Kramer */

/* sorts the numbers in big file.txt into three separate files: negative.txt, normal.txt, and too big.txt */

#include <stdio.h>

int main(void)

{

int numb, i, j, k, negtotal, normtotal, bigtotal;
float neg_ave, norm_ave, big_ave;


FILE *ifile;
FILE *neg;
FILE *norm;
FILE *big;

ifile = fopen("big_file.txt", "r");
neg = fopen("negative.txt", "w");
norm = fopen("normal.txt", "w");
big = fopen("too_big.txt", "w");

/* Checks to see if the file, big_file.txt, is open */
	if (ifile == NULL) {
		printf("File not found!\n");
		return (-1);
	}

i=j=k=negtotal=normtotal=bigtotal=0;

while ( fscanf(ifile, "%d", &numb)  != EOF ) {
	if (numb < 0){
		fprintf(neg,"%d ", numb);
		negtotal = negtotal + numb;
		i++;
	} else if ((numb >= 0) && (numb <= 100)) {
		fprintf(norm,"%d ", numb);
		normtotal = normtotal + numb;
		j++;
	} else {
		fprintf(big,"%d ", numb);
		bigtotal = bigtotal + numb;
		k++;
	}	
}

neg_ave = negtotal / i;
norm_ave = normtotal / j;
big_ave = bigtotal / k;

printf("The average of the %d numbers in the file negative.txt is %f.\n\n", i, neg_ave);
printf("The average of the %d numbers in the file normal.txt is %f.\n\n", j, norm_ave);
printf("The average of the %d numbers in the file too_big.txt is %f.\n\n", k, big_ave);

fclose(ifile);
fclose(neg);
fclose(norm);
fclose(big);

return (0);

}

/*

The average of the 58 numbers in the file negative.txt is -10.000000.

The average of the 5890 numbers in the file normal.txt is 65.000000.

The average of the 2052 numbers in the file too_big.txt is 121.000000.

*/
