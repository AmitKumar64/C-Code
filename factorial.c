#include <stdio.h>
#include <conio.h>

int main()
{
    int fact = 1, a, i;
    printf("Enter the number of factorinal: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("%d\n", i);
 
        fact = fact * i;
    }
    printf("factorial of %d!=%d",a,fact);

    return 0;
}