#include <stdio.h>
int main()
{
    long int n, x, y, binary = 0, i = 1;
    printf("Enter the decimal number: ");
    scanf("%lu", &n);
    x = n;
    while (n != 0)
    {
        y = n % 2;
        n = n / 2;
        binary = binary + (y * i);
        i = i * 10;
    }
    printf("\n Binary number of %lu is %lu", x, binary);
    return 0;
}