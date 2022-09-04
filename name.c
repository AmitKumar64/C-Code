#include<stdio.h>
#include<conio.h>

struct student
{
    int roll;
    char name[50];
};
int main()
{
    printf("\nNOTE:-use (-) sign in the position of space\n");
   while(1)
    {
    struct student s;
    printf("Enter the roll no.:");
    scanf("%d",&s.roll);
    printf("Enter the name of student: ");
    scanf("%s",&s.name);
    }
    

   
}
