/* Jonathan Kramer */

#include <stdio.h>

int main(void)

{

int i,j,k,n,m;
i = j = k = m = n = 0;
m = n = 9;

for (k=0; k<n; k++) {
	m = j++ * ++i;
	printf("%d %d %d %d %d\n", i,j,k,n,m);
}

printf("%d %d %d %d %d\n", i,j,k,n,m);

return (0); 

}

/*

1 1 0 9 0
2 2 1 9 2
3 3 2 9 6
4 4 3 9 12
5 5 4 9 20
6 6 5 9 30
7 7 6 9 42
8 8 7 9 56
9 9 8 9 72
9 9 9 9 72

*/