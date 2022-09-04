#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    printf("Enter The two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("%d", c);
    return 0;
}