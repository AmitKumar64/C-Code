#include <stdio.h>
int main()
{
    int x[20][4] = {{65, 8, 9,5,4}, {45, 33, 4, 56}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("main %d-%d, %d\n", i, j, x[i][j]);
        }
    }
    return 0;
}