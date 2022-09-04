#include<stdio.h>
int main(){
    int year,a;
    printf("Enter year\n");
    scanf("%d",&year);
    a=year%4;
    if(a==0)
    printf("leap year");
    else
    printf("not leap year");

    return 0;
}