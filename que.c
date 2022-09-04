// #include<stdio.h>
// int main()
// {
// char *ptr="helloRamayan";
// printf(ptr+4);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// char *ptr="PPSProgram";
// printf(ptr+2);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a=10,b=6;
// int *ptr;
// ptr=&b;
// printf("%d",a**ptr);
// return 0;
// }


#include<stdio.h>
struct 
{
    int i;
    float ft;
}decl;
int main()
{
decl.i=4;
decl.ft=7.96623;
printf("%d %.2f",decl.i,decl.ft);
return 0;
}