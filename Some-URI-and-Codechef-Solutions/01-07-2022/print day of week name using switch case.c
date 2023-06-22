#include<stdio.h>
int main()
{

    int dayNo;
    scanf("%d",&dayNo);

    switch(dayNo)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thuesaday\n");
        break;
    case 7:
        printf("friday\n");
        break;
    }


    return 0;
}
