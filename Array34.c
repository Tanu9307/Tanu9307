//A program to find the minimum value that can be added to an element so that array becomes balanced

#include <stdio.h>
int main()
{
    int n,i;
    printf("The number of elements in the array: ");
    scanf("%d",&n);
    printf("The elements in the array are:\n");
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int s=0;
    for(i=0; i<(n/2); i++)
    {
        s= s+a[i];
    }
    printf("The sum of the first %d elements is %d\n", (n/2), s);
    int t=0;
    for(i=(n/2); i<n; i++)
    {
        t=t+a[i];
    }
    printf("The sum of last %d elements is %d\n", (n/2), t);
    if(t>s)
    printf("%d should be added to the first %d elements to make the array an even sized array", (t-s), (n/2));
    else if(s>t)
    printf("%d should be added to the last %d elements to make the array an even sized array", (s-t), (n/2));
    else
    printf("Hence, the array is an even sized array");
    return 0;
}