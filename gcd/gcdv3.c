//  consequtive integer checking

#include <stdio.h>

int gcd(int a, int b)
{
int r,t1,t2,count=0;
if(a<b)
	r=a;
else 
	r=b;
while(r!=1)
	{
	count++;
	t1=a%r;
	if(t1==0)
		{
		t2=b%r;
		if(t2==0)
			return r;
		}	
	r=r-1;
	}
	printf("count=%d\n",count);
	return r;
}
 
void main()
	{
    int a,b,g;
    scanf("%d %d",&a,&b);
    g=gcd(a,b);
    printf("%d is the greatest common divisor of %d ,%d",g,a,b);
}
