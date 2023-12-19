// modulo division

#include <stdio.h>

int gcd(int a, int b)
{
int r;
   while(b!=0)
   	{
   	r=a%b;
   	a=b;
   	b=r;
   	}
   return a;
}
 
void main()
	{
    int a,b,g;
    scanf("%d %d",&a,&b);
    g=gcd(a,b);
    printf("%d is the greatest common divisor of %d ,%d",g,a,b);
}
