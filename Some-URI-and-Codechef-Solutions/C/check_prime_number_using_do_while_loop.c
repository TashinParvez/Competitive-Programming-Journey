#include <stdio.h>
int main()
{
    int n, prime = 1;
    printf("enter the the number tou want to check is that prime or not ");
    scanf("%d", &n);

    int i = 2;
    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }while (i < n);
    if (prime == 0)
    {
        printf("This number is not prime");
    }
    else
    {
        printf("This number is prime");
    }
    return 0;
}