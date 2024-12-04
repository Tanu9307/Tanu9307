//A program  to find the index of first repeating element in it i.e. the element that occurs more than once and whose index of the first occurrence is the smallest.

#include <stdio.h>
int main()
{
    int n, flag=0;
    printf("The number of elements in the array: ");
    scanf("%d", &n);
    int j,i,a[n],s=0;
    printf("The elements in the array are:\n");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    {
      for(j=i+1; j<n; j++)
      {
          if(a[i]==a[j])
          {
              s=1;
              break;
          }
      }
      if(s==1)
        {printf("First repeating element is %d", a[i]);
        break;}
    }
    return 0;
}