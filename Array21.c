//A program for a 2D array of size 3x3 and print the matrix

#include <stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    printf("Give 9 values to be filled in the 2D array of size 3x3:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}