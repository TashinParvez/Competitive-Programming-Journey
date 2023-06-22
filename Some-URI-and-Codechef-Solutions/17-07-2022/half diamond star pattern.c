
#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);


    for(int i=1; i<=T; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(int i=1; i<=T-1; i++)
    {
        for(int j=i; j<=T-1; j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}



/*
                               //   taken from net
#include<stdio.h>
int main()
{
    int N,i, columns;

    printf("Enter number of columns:");
    scanf("%d",&N);

    columns=1;

    for(i=1; i<N*2; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            printf("*");
        }


        if(i < N)
            columns++;
        else
            columns--;


        printf("\n");
    }

    return 0;
}

*/
