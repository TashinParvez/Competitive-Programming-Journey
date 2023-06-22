#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks > 89 && marks < 101)
    {
        printf("Your grade is A");
    }
    else if (marks > 79 && marks < 90)
    {
        printf("Your grade is B");
    }
    else if (marks > 69 && marks < 80)
    {
        printf("Your grade is C");
    }
    else if (marks > 59 && marks < 70)
    {
        printf("Your grade is D");
    }
    else if (marks > 49 && marks < 60)
    {
        printf("Your grade is E");
    }
    else if (marks < 49)
    {
        printf("Your grade is F");
    }
    else if (marks >100)
    {
        printf("Your number doesn't exist");
    }
    else
    {
        printf("Your number doesn't exist");
    }
    return 0;
}