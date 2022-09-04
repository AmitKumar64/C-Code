// Do While Loop

#include <stdio.h>
int main()
{
    int num, x = 1;
    printf("Enter the number\n");
    scanf("%d", &num);

    do
    {

        printf("%d\n", x);
        x = x + 1;
    } while (x <= num);

    return 0;
}