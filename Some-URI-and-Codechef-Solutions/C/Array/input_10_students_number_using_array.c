#include <stdio.h>
int main()
{
    int students[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the vale of roll= %d student marks ", (i + 1));
        scanf("%d", &students[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Roll=%d student number is %d\n", (i + 1), students[i]);
    }

    return 0;
}