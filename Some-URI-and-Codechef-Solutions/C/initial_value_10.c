#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10 && i < 21)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}