// #include<stdio.h>
// int main()
// {
// int x=42,y=23;
// printf(" %c",x+y);
// return 0;
// }

#include<stdio.h>
int main()
{
    int i,j,x,y,a,n=0;
    printf("Enter the number of row of star: ");
    scanf("%d",&a);
     for (i = 1; i <= a; ++i, n = 0)
            {
                for (j = 1; j <= a - i; ++j)
                {
                    printf(" ");
                }
                while (n != 2 * i - 1)
                {
                    printf("*");
                    ++n;
                }
                printf("\n");
            }

return 0;
}