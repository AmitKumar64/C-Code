#include <stdio.h>

int main()
{
    char ch[100];
    FILE *ptr = NULL;
    ptr = fopen("myfile1.txt", "w");
    printf("Enter the name : ");
    gets(ch);
    fputs(ch, ptr);

    fclose(ptr);
    return 0;
}