#include <stdio.h>
int main()
{
    int array[6][2];

    for (int i = 0; i < 6; i++)
    {
        printf("Enter student roll ");
        scanf("%d", &array[i][i]);

        printf("Enter roll %d student total marks ", array[i][i]);

        ahdjah
            scanf("%d", &array[i][i + 1]);
        i++;
    }
    for (int j = 0; j < 6; j++)
    {
        printf("roll %d student total marks %d", array[j][j], array[j][j + 1]);
    }
}