#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int sSort(int[],int);
void main()
	{
	int n = 10,b,w,a,i;
	FILE*fp = NULL;
	fp = fopen("selSort.txt","w");
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
     	b = sSort(arr,n);  
		for(i=0;i<n;i++)
			arr[i] = n-i;
		//Worst case  
		w=sSort(arr,n); 
		for(i=0;i<n;i++)
			arr[i] = rand()%100; 
     	//Average case
     	a=sSort(arr,n);
     	fprintf(fp,"%d\t%d\t%d\t%d\n",n,b,w,a);
     	n+=10;
     	}
     fclose(fp);
	}

int sSort(int arr[],int n)
{
	int i,j, count = 0,min,temp;
	for (i = 0 ; i < n - 1; i++)
		{
		min = i;
      	for (j = i + 1; j < n; j++)
      		{
      		count++;
      		if(arr[j] < arr[min])
      			min = j;
        		}
        	if(min!= i)
        		{
        		temp=arr[min];
        		arr[min]=arr[i];
        		arr[i]=temp;
    			}
    		}
     return count;
}
