#include <stdio.h>
#include <math.h>

int main()
{
    int n, bin;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    long long bin = 0;
    int rem, i = 1;

    while (n!=0)
    {
        rem = n % 2;
        bin += rem * i;
        n /= 2;
        i *= 10;
    }
    printf("%d in decimal =  %lld in binary", n, bin);
    return 0;
}
