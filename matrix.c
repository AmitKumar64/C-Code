#include <stdio.h>
#include <math.h>

int main()
{

    double matrix_A[3][3], cofactors_A[3][3], adj_A[3][3], d;
    int i, j, k, l;
    //TO GET ALL THE ELEMENTS OF THE MATRIX

    printf("Enter all the elements of Matrix_A\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("a%d%d=", i + 1, j + 1);
            scanf("%lf", &matrix_A[i][j]);
        }
    }
    // TO PRINT THE ENTERED MATRIX

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("  %.2f  ", matrix_A[i][j]);

        printf("\n");
    }

     
    // code for determinant
    d = (matrix_A[0][0] * (matrix_A[1][1] * matrix_A[2][2] - matrix_A[2][1] * matrix_A[1][2])) - (matrix_A[0][1] * (matrix_A[1][0] * matrix_A[2][2] - matrix_A[1][2] * matrix_A[2][0])) + (matrix_A[0][2] * (matrix_A[1][0] * matrix_A[2][1] - matrix_A[2][0] * matrix_A[1][1]));

    printf("\nDeterminant of matrix is %.2f\n", d);


    // TO FIND THE COFACTORS

    cofactors_A[0][0] = (matrix_A[1][1] * matrix_A[2][2]) - (matrix_A[2][1] * matrix_A[1][2]);

    cofactors_A[0][1] = (matrix_A[1][0] * matrix_A[2][2]) - (matrix_A[2][0] * matrix_A[1][2]);

    cofactors_A[0][2] = (matrix_A[1][0] * matrix_A[2][1]) - (matrix_A[2][0] * matrix_A[1][1]);

    cofactors_A[1][0] = (matrix_A[0][1] * matrix_A[2][2]) - (matrix_A[2][1] * matrix_A[0][2]);

    cofactors_A[1][1] = (matrix_A[0][0] * matrix_A[2][2]) - (matrix_A[2][0] * matrix_A[0][2]);

    cofactors_A[1][2] = (matrix_A[0][0] * matrix_A[2][1]) - (matrix_A[2][0] * matrix_A[0][1]);

    cofactors_A[2][0] = (matrix_A[0][1] * matrix_A[1][2]) - (matrix_A[1][1] * matrix_A[0][2]);

    cofactors_A[2][1] = (matrix_A[0][0] * matrix_A[1][2]) - (matrix_A[1][0] * matrix_A[0][2]);

    cofactors_A[2][2] = (matrix_A[0][0] * matrix_A[1][1]) - (matrix_A[1][0] * matrix_A[0][1]);

    // TO PRINTF COFACTOR MATRIX
    printf("\nThis is cofactors_A matrix\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("  %.2f  ", cofactors_A[i][j]);

        printf("\n");
    }

    // ADJ_A MATRIX

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if ((i + 1 + j + 1) % 2 == 0)
            {
                adj_A[j][i] = cofactors_A[i][j];
            }
            else
                adj_A[j][i] = -cofactors_A[i][j];
        }
        printf("\n");
    }

    printf("\nTHIS IS ADJOINT MATRIX\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("  %.2f  ", adj_A[i][j]);

        printf("\n");
    }

    
    printf("\nInverse of the matrix\n");
    if (d == 0)
        printf("Inverse doesnt exist");
    else
    {
        for (i = 0; i <= 2; i++)
        {
            for (j = 0; j <= 2; j++)
                printf("  %.2f  ", adj_A[i][j] / d);

            printf("\n");
        }
    }
}
