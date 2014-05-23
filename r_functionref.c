/* Jonathan Kramer */

#include <stdio.h>

int main(void)
{

int value1, value2;

printf("Enter first value to be multiplied by ten >>>");
scanf("%d", &value1);
printf("\nEnter second value to be multiplied by ten >>>");
scanf("%d", &value2);

times10(&value1, &value2);

printf("\n\nValue1 now equals %d\nValue2 now equals %d\n", value1, value2);

return(0);

}

void times10(int *val1, int *val2)
{

*val1 *= 10;
*val2 *= 10;

}