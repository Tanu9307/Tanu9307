//An array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers. 
#include <stdio.h>
int main()
{
    int i,j,t,n;
    printf("The number of values to be taken are:");
	scanf("%d", &n);
	int a[n];
	printf("The values to be taken are (N+1):\n");
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
    if(a[i]!=(i+1))
    printf(" the missing number from the first %d integers is %d", (n+1), (i+1));
return 0;
}