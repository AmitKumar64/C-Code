#include <stdio.h>

int GCD(int, int);

int main()
{
    int n1, n2, x;
    printf("Enter the two number: ");
    scanf("%d%d", &n1, &n2);
    printf("\nGCD of %d and %d is %d.\n\n", n1, n2, GCD(n1, n2));
    return 0;
}

int GCD(int n1, int n2)
{
    if (n2 != 0)
        return GCD(n2, n1 % n2);
    else
        return n1;
}