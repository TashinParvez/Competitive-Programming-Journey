#include<stdio.h>

void sumofNumbers(int number1, int number2)
{
    int sum = number1 + number2;
    printf("Sum of %d and %d is %d",number1,number2,sum);
}

int main()
{
    int num1,num2;
    printf("Enter 2 integers: ");
    scanf("%d %d",&num1,&num2);

    sumofNumbers(num1,num2);

    return 0;
}
