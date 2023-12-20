#include<stdio.h>
#include<stdlib.h>

int ls(int a[],int key,int s)
	{
	int len,count=0;
	for(int i=0;i<s;i++)
		{
		count++;
		if(a[i]==key)
			break;
		}
	return count;
	}	

void main()
	{
	int *a,k;
	FILE *f;
	f=fopen("ls.txt","w");
	for(int i=100;i<=1000;i+=100)
		{
		a=(int *)malloc(i*sizeof(int));
		for(int j=0;j<i;j++)
			{
			a[j]=j;
			}
		fprintf(f,"%d\t%d\t%d\t%d\n",i,ls(a,a[0],i),ls(a,a[((i/2)-1)],i),ls(a,a[(i-1)],i));
		}
	}
