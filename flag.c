#include <stdio.h>
int main()
{ 
    int i, j, k, n;
    printf("Enter the length of flag:");
    scanf("%d", &n);

    for (i = 1; i = n / 3; i++)
    {
        for (j = 1; j < 7; j++)
        {
            if ((i == 1 && j == 6) || (i == 2 && j == 5) || (i > 2 && j == 4))
                printf("*");
            else
                printf(" ");
        }
        for (j = 7; j <= 21; j++)
        {
            if (j < 9)
                printf("🟫");
            else
                printf("🟧");
        }
        printf("\n");
    }
    for (i = n / 3; i < 2 * n / 3; i++)
    {
        for (j = 1; j < 7; j++)
        {
            if (i >= n / 3 && j == 4)
                printf("*");
            else
                printf(" ");
        }
        for (j = 7; j <= 21; j++)
        {
            if (j == 15 && i == 4 * n / 9)
                printf("🔵");
            else if (j < 9)
                printf("🟫");
            else
                printf("⬜");
        }
        printf("\n");
    }
    for (i = 2 * n / 3; i < n; i++)
    {
        for (j = 1; j < 7; j++)
        {
            if (i >= 2 * n / 3 && j == 4)
                printf("*");
            else
                printf(" ");
        }
        for (j = 7; j <= 21; j++)
        {
            if (j < 9)
                printf("🟫");
            else
                printf("🟩");
        }
        printf("\n");
    }
    return 0;
}