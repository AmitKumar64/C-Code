#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        goto even;
        
    }
    
    else
    {
        goto odd;
    }
     even: printf("Even");
      
     odd: printf("odd");
}