#include <stdio.h>
int armstrong(int);

int main()
{
    int n, x;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    x = armstrong(n);
    if (x == 1)
        printf("\n%d is an armstrong number\n\n", n);
    else
        printf("\n%d is not an armstrong number\n\n", n);
    return 0;
}
int armstrong(int n)
{
    int s = 0, z, y;
    y = n;
    while (y > 0)
    {
        z = y % 10;
        s = s  + (z * z * z);
        y = y / 10;
    }
    if (s == n)
        return 1;
    else
        return 0;
}