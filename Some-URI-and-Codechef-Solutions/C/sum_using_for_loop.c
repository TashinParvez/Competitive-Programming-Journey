#include <stdio.h>
int main()
{
    int i, sum = 0, a;
    printf("Enter the last natural number\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        sum = sum + i;
        if (i == a)
        {
            printf("%d=", i);
            break;
        }
        printf("%d+", i);
    }
    printf("%d", sum);
    return 0;
}