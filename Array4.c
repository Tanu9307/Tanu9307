//A program to interchange alternate elements in an even sized array

#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("The number of values to be taken are:");
	scanf("%d", &n);
	if (n%2==0)
	{
	int a[n];
	printf("The values to be taken are:\n");
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
    for(i=0; i<n-1; i++)
    {
    for(j=0; j<n-i-1; j+=2)
    {

    	t=a[j];
    	a[j]=a[j+1];
    	a[j+1]=t;    		
	}
	}
	printf("After interchanging the elements we get\n");
	for(i=0; i<n; i++)
    printf("%d ", a[i]);
}
   else
   {
   	printf("The number of values to be taken here should be even");
   }
	return 0;	
}
