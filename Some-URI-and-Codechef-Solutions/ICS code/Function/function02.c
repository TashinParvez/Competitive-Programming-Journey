#include<stdio.h>

int sumofnumbers(int number1,int number2)
{
    int sum = number1+number2;
    return sum;
}

int main()
{
    int num1,num2;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);


    int result= sumofnumbers(num1,num2);
    printf("%d",result);

    return 0;
}

