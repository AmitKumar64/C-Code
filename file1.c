#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("index.txt", "w");

    printf("Input Line and press EOP\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    printf("Output\n");
    fp = fopen("index.txt", "r");
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}