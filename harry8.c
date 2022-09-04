#include <stdio.h>
int main()
{
    int i, a;
    printf("Enter the multiplication number: \n");
    scanf("%d", &a);

    
        for (i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", a, i, a * i);
        }
    

    return 0;
}