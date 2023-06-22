#include<stdio.h>
int main()
{

    int r;
    scanf("%d",&r);
    int count =1;
    for(int i=1; i<=r; i++)
    {

        for(int j=i; j<=r-1; j++)
        {
            printf("  ");

        }
        for(int j=1; j<=count; j++)
        {
            printf("* ");
        }
        count+=2;

        printf("\n");
    }
    count-=4;
    for(int i=1; i<=r-1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("  ");
        }

        for(int j=1; j<=count; j++)
        {
            printf("* ");
        }

        count-=2;
        printf("\n");
    }

    return 0;
}

