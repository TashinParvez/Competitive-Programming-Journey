#include <stdio.h>
int main()
{

    int n, sum = 0;
    printf("Enter a nutural Number ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, (n * i));
        sum = sum + (n * i);
        if (i == 10)
        {
            printf("----------\n");
            printf("Total = %d", sum);
        }
    }
    return 0;
}