#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number you wannt to see repeat ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("%d ", n);
        i++;
    }
    return 0;
}