#include <stdio.h>
int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = factorial(number);

    printf("Factorial of %d = %d",number,result);
    return 0;
}

int factorial(int num)     // function part
{
    if(num != 0)
    {
        int fac=num * factorial(num-1);
        return fac;
    }
    else
    {
        return 1;
    }
}

