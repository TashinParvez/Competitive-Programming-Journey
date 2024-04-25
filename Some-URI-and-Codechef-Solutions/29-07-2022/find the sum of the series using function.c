#include<Stdio.h>
int serisSum(int);
int factorial(int);

int serisSum(int n)
{
    int sum=0;
    while(n--)
    {
        sum = sum +(factorial(n)/n);
    }

    return sum;
}

int factorial(int n)
{
    int fact=1;
    while(n--)
    {
        fact= fact*n;
    }
    return fact;
}


int main()
{
    int n;
    scanf("%d",&n);

    int sum = serisSum(n);
    printf("Sum = %d\n",sum);
    return 0;
}

