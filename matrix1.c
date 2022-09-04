
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a[3][3], b[3][3], i, j, c[3][3];
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("Enter the elements of row %d: ", i + 1);
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Given:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("Enter the elements of row %d: ", i + 1);
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Given:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of given two matrix:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}