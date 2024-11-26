// A program to find the kth largest and kth smallest elements in an array.

#include <stdio.h>
int main()
{
int k,n,i,j,t;
	printf("The number of values to be taken are:");
	scanf("%d", &n);
	int a[n];
	printf("The values to be taken are:\n");
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<(n-1); i++)
	{
	for(j=0; j<(n-i-1); j++)
	{
		if(a[j]>a[j+1])
		{
		t= a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	}
}
printf("The kth largest and kth smallest term to be found, where k is ");
scanf("%d", &k);
printf("\n %d is the %dth lagerst term and %d is the %dth smallest term", a[n-k], k, a[k-1], k);
return 0;
}