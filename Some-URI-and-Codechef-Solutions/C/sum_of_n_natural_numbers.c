#include <stdio.h>
int nn(int);
int main()
{
    int n;
    printf("Enter the last natural number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d=", i);
            break;
        }
        printf("%d+", i);
    }
    printf("%d", nn(n));
    return 0;
}
int nn(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + nn(n - 1);
}