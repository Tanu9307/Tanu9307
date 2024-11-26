//A program to find sum of right diagonals of a matrix

#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Order of the square matrix should be: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Give the values in the matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of right diagonals of a matrix is: ");
    int s=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
        if(i==j)    
        {
            s=s+a[i][j];
        }
    }
    }
    printf("%d", s);
    return 0;
}