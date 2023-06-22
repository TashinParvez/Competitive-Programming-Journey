#include <stdio.h>
int main()
{
    int salary;
    float tax;

    printf("Enter your salary in number ");
    scanf("%d", &salary);

    if (salary < 250000)
    {
        printf("You dont need to pay any TAX. \n Thank You");
    }
    else if (salary >= 250000 && salary < 500000)
    {
        tax = salary * 5 / 100;
        printf("You have to pay 5 percents of your salary as TAX and And that amount is %f.\nThank You", tax);
    }

    else if (salary >= 500000 && salary < 1000000)
    {
        tax = salary * 20 / 100;
        printf("You have to pay 20 percents of your salary as TAX and And that amount is %f.\n Thank You", tax);
    }

    else if (salary >= 1000000)
    {
        tax = salary * 30 / 100;
        printf("You have to pay 30 percents of your salary as TAX and And that amount is %f.\n Thank You", tax);
    }

    return 0;
}