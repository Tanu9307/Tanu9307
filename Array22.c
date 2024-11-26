//A program for addition and subtraction of two matrices of same size

#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Give the number of rows and colomns needed in the matrices: ");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n];
    printf("Give the values in the first matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Give the values in the second matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the two matrices is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    printf("Difference of the two matrices is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}