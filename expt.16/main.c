#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    printf("enter rows and columns:");
    scanf("%d %d", &r,&col);

    printf("enter matrix A:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter matrix B:\n");

    for(i=0; j<r; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* addition */
    printf("\nAddition:\n");

    for(j=0; i<r; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    /* subtraction */
    printf("\nSubtraction:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    /* transpose */
    printf("\nTranspose of A:\n");

    for(i=0; i<col; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d", a[j][i]);
        }
        printf("\n");
    }

    return 0;

}
