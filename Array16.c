// A program to copy the elements of one array into another

#include <stdio.h>
int main()
{
    int n,i;
    printf("The number of elements in the array should be: ");
    scanf("%d", &n);
    int a[n];
    printf("The values in the array be:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    int b[n];
    for(i=0; i<n; i++)
    b[i]=a[i];
    printf("By coping the first array into the second we get the second array as ");
    for(i=0; i<n; i++)
    printf("%d ", b[i]);
   return 0; 
}