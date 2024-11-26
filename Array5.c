//A program to reverse the array elements

#include <stdio.h>
int main()
{
int n,i,t;
	printf("The number of values to be taken are:");
	scanf("%d", &n);
	int a[n];
	printf("The values to be taken are:\n");
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<(n/2); i++)
	{
		t= a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
		}	
	for(i=0; i<n; i++)
    printf("%d ", a[i]);
	return 0;	
}
