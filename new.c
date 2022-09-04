#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the numbers:\n");
    scanf("%d %d", &n1, &n2);
    n3 = n1 + n2;
    printf("Sum of %d and %d is %d", n1,n2,n3);
    return 0;
}