//A program to find the ceiling in a sorted array

#include <stdio.h>
int main()
{
    int n;
    printf("The number of elements in the array: ");
    scanf("%d", &n);
    int a[n],i,j,t;
    printf("The elements in the array are:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-1-i); j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0; i<n; i++)
    printf("%d ", a[i]);
    int X;
    printf("\nThe number for which the ceiling is to be found is: ");
    scanf("%d", &X);
    printf("The ceiling of %d is: ", X);
    for(i=0; i<n; i++)
    {
        if(a[i]>X)
        {
            printf("%d", a[i]);
            break;
        }
    }
    return 0;
}