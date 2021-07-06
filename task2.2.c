#include<stdio.h>
long int findFactorial(int n)
	{
	if(n==0)
		{
		return 1;
		}
	else
		return n*findFactorial(n-1);
	}
int main()
	{
	int n,i;
	printf("Enter the size of Array ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d elemnets ",n);
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	for(i=0;i<n;i++)
		{
		if(arr[i]<0)
			{arr[i]=1;}
		}
	for(i=0;i<n;i++)
		{
		printf("\nFactorial of %d is %ld ",arr[i],findFactorial(arr[i]));
		}
	}