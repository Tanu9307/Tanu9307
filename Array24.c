//A program to find transpose of a given matrix

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
    printf("The transpose of the given matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}