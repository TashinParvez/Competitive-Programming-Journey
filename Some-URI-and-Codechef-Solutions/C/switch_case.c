#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks to know your grade\n");
    scanf("%d", & marks);


    if (100 >= marks >= 90)
    {
        printf("Your grade is A");
    }
    else if (80 <= marks <= 89)
    {
        printf("Your grade is B");
    }
    else if (70 <= marks <= 79)
    {
        printf("Your grade is C");
    }
    else if (60 <= marks <= 69)
    {
        printf("Your grade is D");
    }
    else if (marks <= 59)
    {
        printf("Your grade is F");
    }
    return 0;
}