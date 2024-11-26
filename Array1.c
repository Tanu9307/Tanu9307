//A program to find min, max, and avg of an unsorded array

#include <stdio.h>
int main()
{
	int s,n,i,j,t;
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
printf("The maximum of the given numbers is %d\n", a[0]);
printf("The mimimum of the given numbers is %d\n", a[n-1]);
s=0;
for(i=0; i<n; i++)
{
	s=s+a[i];
}
float u=s/n;
printf("The average of the given numbers is %f", u);
return 0;
}
