#include <stdio.h>

void star(int);
int main()
{
    int n;
    printf("enter how much star you want to see in the last row ");
    scanf("%d",&n);
    star(n);
    return 0;
}
void star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            printf("*");
        }
        printf("\n");
    }
}