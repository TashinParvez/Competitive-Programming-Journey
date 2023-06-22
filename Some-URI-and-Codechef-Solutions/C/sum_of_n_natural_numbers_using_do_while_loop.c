#include <stdio.h>
int main()
{
    int a, i, sum = 0;
    printf("enter the last natural number ");
    scanf("%d", &a);
    i = 1;
    do
    {
        sum = sum + i;
        if (i == a)
        {
            printf("%d=", i);
            break;
        }
        printf("%d+", i);
        i++;

    } while (i <= a);
    printf("%d", sum);
    return 0;
}