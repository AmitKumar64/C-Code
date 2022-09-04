#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[30];
} s1;
// union student

// {
//     int roll;
//     char name[30];
// };
int main()
{
    printf("Enter the Name of student : ");
    gets(s1.name);

    printf("%s", s1.name);
    return 0;
}