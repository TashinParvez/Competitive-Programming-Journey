#include<stdio.h>

int multiplicationofnumbers(int number1,int number2); //function prototype

int main()
{
    int num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);

    int result= multiplicationofnumbers(num1,num2);       //call function
    printf("Multipilication of %d and %d is %d",num1,num2,result);

    return 0;
}

int multiplicationofnumbers(int number1, int number2)  // function
{
    int sum = number1*number2;
    return sum;
}

