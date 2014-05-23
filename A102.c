/* Jonathan Kramer */

/* counts the numbers in the file big_file.txt */

#include <stdio.h>

int main(void)

{

int numb, file_total;
file_total = 0;

FILE *ifile;
ifile = fopen("big_file.txt", "r");

/* Checks to see if the file is open */
	if (ifile == NULL) {
		printf("File not found!\n");
		return (-1);
	}

/* will keep scanning numbers from the file, adding 1 to file_total for each number, until end_of_file is reached. */
while ( fscanf(ifile, "%d", &numb)  != EOF ) {
	/* printf("%d\n", numb); */
	file_total++;
}

printf("The total number of files is %d.\n", file_total);

fclose(ifile);

return (0);

}

/*

The total number of files is 8000.

*/