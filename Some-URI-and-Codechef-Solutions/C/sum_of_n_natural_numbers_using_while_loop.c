#include <stdio.h>
int main()
{
    int a, i, sum = 0;
    printf("enter the last natural number ");
    scanf("%d", &a);
    i = 1;
    while (i <= a)
    {
        sum = sum + i;
        if (i == a)
        {
            printf("%d=", i);
            break;
        }
        printf("%d+", i);
        i++;

    } 
    printf("%d", sum);
    return 0;
}