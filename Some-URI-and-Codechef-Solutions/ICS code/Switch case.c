#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number from 1 to 7:  ");
    scanf("%d",&number);

    switch(number)
    {
    case 1:
        printf("Saturday\n");
        break;                 // it's very important to use break in switch case

    case 2:
        printf("Sunday\n");
        break;

    case 3:
        printf("Monday\n");
        break;

    case 4:
        printf("Tuesday\n");
        break;

    case 5:
        printf("Wednesday\n");
        break;

    case 6:
        printf("Thursday\n");
        break;

    case 7:
        printf("Friday\n");
        break;

    default:
        printf("You entered a invalide number ");

    }

    return 0;
}
