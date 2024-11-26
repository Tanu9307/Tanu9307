//A program to give a stream of numbers, print average or mean of the stream at every point

#include <stdio.h>
int main()
{
    int n;
    printf("The number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("The elements in the array are:\n");
    int i;
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    int s=0,t;
    printf("The average of the stream at every point is: ");
    for(i=0; i<n; i++)
    {
        s=s+a[i];
        t=s/(i+1);
        printf("%d ", t);
    }
    return 0;
}