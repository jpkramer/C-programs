 /* Jonathan Kramer */
 
#include <stdio.h>

int main(void)

{

int n,m,p,q,ans;
   p = 0;
   q = 1;
   m = n = 10;
   
   printf("n  m  p  q  ans\n");
   
   printf("%d %.2d %d  %d  %d\n", n,m,p,q,ans);
  
   ans = m * n+1 / q / 2;
   
   printf("%d %.2d %d  %d  %d\n", n,m,p,q,ans);
 
   ans = m - n++;
   
   printf("%d %.2d %d  %d  %d\n", n,m,p,q,ans);
  
   ans = ++p % 2;
   
   printf("%d %.2d %d  %d  %d\n", n,m,p,q,ans);
  
   ans = (0 <= m <= 2);
   
   printf("%d %.2d %d  %d  %d\n", n,m,p,q,ans);
   
   ans = (!--m && p + q || q) + 5;
   
   printf("%d %.2d %d  %d  %d\n", n,m,p,q,ans);
  
return (0);

}

/*

n  m  p  q  ans
10 10 0  1  0
10 10 0  1  100
11 10 0  1  0
11 10 1  1  1
11 10 1  1  1
11 09 1  1  6

*/