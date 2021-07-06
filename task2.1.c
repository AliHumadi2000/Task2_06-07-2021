#include<stdio.h>
void reversArray(int arr[],int s)
	{
	int i,t=s-1,temp;
	for(i=0;i<s/2;i++)
		{
		temp=arr[i];
		arr[i]=arr[t];
		arr[t]=temp;
		t--;
		}
	printf("Revers order is ");
	for(i=0;i<s;i++)
		{
		printf("%d\t",arr[i]);
		}
	}
void main()
	{
	int n,i;
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
	reversArray(arr,n);
	}