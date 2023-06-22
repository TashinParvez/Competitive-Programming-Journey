
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        for(int j=1; j<=t; j++)
        {
            if(i%2!=0)
                printf("* ");
            else
            {
                if(j==1 || j==t)
                    printf("* ");
                else
                    printf("  ");
            }
        }

        printf("\n");


    }

    return 0;
}
