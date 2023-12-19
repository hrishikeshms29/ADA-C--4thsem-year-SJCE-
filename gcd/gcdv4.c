//  all in one

#include <stdio.h>

int gcd1(int a, int b)
{
int r,count=0;
   while(b!=0)
   	{
   	r=a%b;
   	a=b;
   	b=r;
   	}printf("count=%d\n",count);
   return a;
}

int gcd2(int a, int b)
{
int r,count=0;
   while(a!=b)
   	{
   	if(a>b)
   		a=a-b;
   	else 
   		b=b-a;
   	}
   	printf("count=%d\n",count);
   return a;
}

int gcd3(int a, int b)
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
    g=gcd1(a,b);
    printf("%d is the greatest common divisor of %d ,%d",g,a,b);
     g=gcd2(a,b);
    printf("%d is the greatest common divisor of %d ,%d",g,a,b);
     g=gcd3(a,b);
    printf("%d is the greatest common divisor of %d ,%d",g,a,b);
}
