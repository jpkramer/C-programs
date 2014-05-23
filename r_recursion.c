/* Jonathan Kramer */

#include <stdio.h>

int main(void)
{

int n;

factorial(n);

return(0);

}

int factorial(int n )
{
	if (n==1)
		return (1);
	else
		return (n*factorial(n-l));
}