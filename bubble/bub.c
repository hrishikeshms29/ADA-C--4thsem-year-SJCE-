#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int bSort(int[],int);
void main()
	{
	int n = 10,b,w,a,i;
	FILE*fp = NULL;
	fp = fopen("bSort.txt","w");
	if(fp == NULL)
		{
		printf("Error!!");
		exit(1);
		}
	while(n!=110)
		{
		int arr[n];
		for (i = 0; i < n; i++)
			arr[i] = i+1;
	     //Best case  
     	b = bSort(arr,n);  
		for(i=0;i<n;i++)
			arr[i] = n-i;
		//Worst case  
		w=bSort(arr,n); 
		for(i=0;i<n;i++)
			arr[i] = rand()%100; 
     	//Average case
     	a=bSort(arr,n);
     	fprintf(fp,"%d\t%d\t%d\t%d\n",n,b,w,a);
     	n+=10;
     	}
     fclose(fp);
	}

int bSort(int arr[],int n)
{
	int i,j, count = 0,exchange,temp;
	for (i = 0 ; i < n - 1; i++)
		{
		exchange = 0;
	for(j=0;j<n-i-1;j++)
		{
		count++;
		if(arr[j]>arr[j+1])
			{
			exchange++;
           	temp=arr[j];
           	arr[j]=arr[j+1];
           	arr[j+1]=temp;
         		}
       	}
    		if(exchange == 0)
			break;
    		}
     return count;
}
