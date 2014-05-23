/* Jonathan Kramer */

#include <stdio.h>
#define PI 3.14159

float deg2rad(float degrees);

int main(void)
{

float degrees, radians;

printf("Enter a value in degrees to be converted to radians >>> ");
scanf("%f", &degrees);

radians = deg2rad(degrees);

printf("\n\n%f degrees is equal to %f radians.\n", degrees, radians);

	return(0);

}

float deg2rad(float degrees)
{
	float radians;
	
	radians = (PI/180) * degrees;
	
	return (radians);	
}