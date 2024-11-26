//A program to find the occurrence of a number in a given array of elements.
#include <stdio.h>
int main()
{
    int i,k,j,t,n,s;
    s=0;
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
printf("The element of which the occurrence is to be found is ");
scanf("%d", &k);
for (i=0; i<n; i++)
{
    if(a[i]==k)
        s++;
    }
printf("Number %d is present %d times", k, s);
return 0;
}