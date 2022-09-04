#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int m, n, o, p;
    printf("Enter the number of row in m1: \t ");
    scanf("%d", &m);
    printf("Enter the number of column in m1:");
    scanf("%d", &n);
    printf("Enter the number of row in m2: \t ");
    scanf("%d", &o);
    printf("Enter the number of column in m2:");
    scanf("%d", &p);

    if (n == o)
    {
        int m1[m][n], m2[o][p], i, j, x, u;
        printf("\nEnter the elements for first matrix(%dX%d)\n\n", m, n);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the elements for row m1[%d][%d] of first matrix: ", i, j);
                scanf("%d", &m1[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("\t%d\t", m1[i][j]);
            }
            printf("\n");
        }
        printf("\n Data of matrix 1 entered successfully");

        printf("\n\nEnter the elements for second matrix(%dX%d)\n", o, p);
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("Enter the elements for row m2[%d][%d] of second matrix: ", o, p);
                scanf("%d", &m2[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("\t%d\t", m2[i][j]);
            }
            printf("\n");
        }
        printf("\n Data of matrix 2 entered successfully\n");

        printf("Matrix obtained after multiplication if entered matrices\n is of order (%dX%d)\n", m, p);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                for (u = 0; u < n; u++)
                {
                    x += m1[i][u] * m2[u][j];
                }
                printf("\t%d\t", x);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nSorry!,Multiplication of given order of Matrix (%dX%d) is not possible\n", n, o);
    }

    
    return 0;
}