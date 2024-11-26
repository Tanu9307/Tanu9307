//A program for multiplication of two square matrices

#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Order of the square matrix should be: ");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    printf("Give the values in the first matrix:\n");
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
    printf("Give the values in the second matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of the two matrices is:\n");
    int c[n][n],k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=0;
            for(k=0; k<n; k++)
            {
                c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
            }
           printf("%d " , c[i][j]);
        }
         printf("\n");
    }
    return 0;
}