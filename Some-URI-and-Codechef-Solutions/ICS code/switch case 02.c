#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number from 1 to 7:  ");
    scanf("%d",&number);

    switch(number)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Weekend\n");
        break;

    case 5:
    case 6:
    case 7:
        printf("Working day\n");
        break;

    default:
        printf("You entered a invalid number ");

    }

    return 0;
}
