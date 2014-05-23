#include <stdio.h>
#define KMS_PER_MILE 1.609
int main(void)
{
float miles, kms;
printf("Enter the distance in miles > "); 
scanf("%f", &miles);
kms = KMS_PER_MILE * miles;
printf("That equals %f kilometers.\n", kms);
return (0);
}

/* 

* engs20-2:~/engs20/workspace$ miles2km
* Enter the distance in miles > 1
* That equals 1.609000 kilometers.
* engs20-2:~/engs20/workspace$ miles2km
* Enter the distance in miles > 2
* That equals 3.218000 kilometers.
* engs20-2:~/engs20/workspace$ miles2km
* Enter the distance in miles > 3
* That equals 4.827000 kilometers.

*/
