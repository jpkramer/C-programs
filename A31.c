/* Jonathan Kramer */
/* worked with Shannon Carman */

/* computes the volume and surface area of a sphere of radius r */

#include <stdio.h> 
#define PI 3.14159265359 /* defines value of pie */
int main(void)
	{
	/* assigns variables used in the program */
	float volume, surfacearea, r;
	
	/* gets the radius in meters */
	printf("Enter the radius in meters > ");
	scanf("%f", &r);
	
	/* Makes surface area and volume a function of r */
	surfacearea = 4 * PI * r * r;
	volume = (4/3) * PI * r * r * r;
	
	/* Displays the surface area in square meters */
	printf("The surface area equals %f square meters.\n", surfacearea );
	
	/* Displays the volume in cubic meters */
	printf("The volume equals %f cubic meters.\n", volume );

	return (0);
	}
	
	/*
	engs20-2:~/engs20/workspace$ assignment3
	* Enter the radius in meters > 1
	* The surface area equals 12.566371 square meters.
	* The volume equals 3.141593 cubic meters.
	engs20-2:~/engs20/workspace$ assignment3
	* Enter the radius in meters > 2
	* The surface area equals 50.265484 square meters.
	* The volume equals 25.132742 cubic meters.
 	engs20-2:~/engs20/workspace$ assignment3
	* Enter the radius in meters > 3
	* The surface area equals 113.097336 square meters.
	* The volume equals 84.822998 cubic meters.
	*/