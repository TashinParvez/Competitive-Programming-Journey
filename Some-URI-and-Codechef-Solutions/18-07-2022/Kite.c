
#include<stdio.h>
int main()
{
    int r = 5;
    // scanf("%d",&r);

    for(int i=1; i<=r; i++)
    {
        for(int j=i; j<=r; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            if(j==1 || j==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }


int m=4;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=i+1; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=m-1+1; j++)
        {
                printf("*");
        }

        for(int j=1; j<=m-1+1; j++)
        {
                printf("*");
        }


        printf("\n");


    }


    return 0;
}
