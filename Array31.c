//A program that returns true if given array can be divided into pairs such that sum of every pair is divisible by k

#include <stdio.h>
int main()
{
    printf("The number of elements in the array: ");
    int n,s;
    scanf("%d", &n);
    printf("The elements in the array are:\n");
    int a[n],i;
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    int k,j;
    printf("The value of k is: ");
    scanf("%d", &k);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i!=j)
            {
                if((a[i]+a[j])%k==0)
                s=1;
                else
                s=0;
            }
        }
    }
    if(s==1)
    printf("True");
    else
    printf("False");
  return 0;
}