#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        int temp = 1;
        for (int j = 1; j <= n - i; j++) // space
        {
            printf("  ");
        }

        for (int j = 1; j <= cnt; j++)
        {
            printf("%d ", temp);
            temp += 2;
        }
        printf("\n");
        cnt += 2;
    }
    cnt -= 2;
    cnt -= 2;
    for (int i = 1; i <= n - 1; i++)
    {
        int temp = 1;
        for (int j = 1; j <=  i; j++) // space
        {
            printf("  ");
        }

        for (int j = 1; j <= cnt; j++)
        {
            printf("%d ", temp);
            temp += 2;
        }
        printf("\n");
        cnt -= 2;
    }

    return 0;
}