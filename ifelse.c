#include <stdio.h>
int main()
{ 
    int a;
    printf("READ THE INSTRUCTIONS FIRST\n");
    printf("Enter only Subject in which you pass the exam 'Maths' OR\a 'Science' OR 'Both Maths and Science'.\n Enter '1' for Maths.\n Enter '2' for Science.\n Enter '12' for Both Math and Science.\n");
    printf("Enter Your Subject Code.\n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("You Pass Maths subject.\nYou Awarded with Prize of Rs. 100\n");
    }
    else if (a == 2)
    {
        printf("You Pass Science subject.\nYou Awarded with Prize of Rs. 100\n");
    }
    else if (a == 12)
    {
        printf("You Pass Maths and Science subject.\nYou Awarded with Prize of Rs. 200\n");
    }
    else
    {
        printf("Invalid Input!\n");
    }
    continue;
    return 0;
}