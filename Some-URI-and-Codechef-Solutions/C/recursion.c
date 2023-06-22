#include <stdio.h>

// factorial(n)= 1 x 2 x 3...........x n
// factorial(n)= 1 x 2 x 3........... n-1 x n
// factorial(n)= factorial(n-1) x n
// factorial(1)=1
// factorial(0)=1

int factorial(int);
int main()
{
    printf("%d", factorial(4));
    return 0;
}
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// factorial(4)
// 4 * factorial(3)
// 4 * 3 * factorial(2)
// 4 * 3 * 2 * factorial(1)
// 4 * 3 * 2 * 1
// 24