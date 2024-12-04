//A program to delete duplicate elements from an array

#include <stdio.h>
int main()
{
    int n,i,j;
    printf("The number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("The elements in the array are:\n");
    for(i=0;i<n;i++)
    {
         scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    printf("The array after deleting the duplicate elements is: ");
     for(i=0; i<n; i++)
     {
         if(a[i]!=0)
         printf("%d ", a[i]);
     }
     return 0;
}