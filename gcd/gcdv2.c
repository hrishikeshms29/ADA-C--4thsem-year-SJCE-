// repeated subtraction division

#include <stdio.h>

int gcd(int a, int b)
{
int r;
   while(a!=b)
   	{
   	if(a>b)
   		a=a-b;
   	else 
   		b=b-a;
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
