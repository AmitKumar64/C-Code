#include <stdio.h>
int main()
{
    int n, i, x, t1 = 0, t2 = 1;
    printf("Enter the number of fibonacci series: ");
    scanf("%d", &n);
    printf("\n%d %d ", t1, t2);
    for (i = 2; i < n; i++)
    {
        x = t1 + t2;
        printf("%d  ", x);
        t1 = t2;
        t2 = x;
    }
    return 0;
}