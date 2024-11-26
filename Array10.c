//A program to find duplicate elements from the given array 
#include <stdio.h>
int main()
{
    int i,j,t,n;
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
printf("The duplicate elements from the given array are");
for(i=0; i<n; i++)
{
    if(a[i+1]==a[i])
    printf(", %d", a[i+1]);
}
return 0;
}