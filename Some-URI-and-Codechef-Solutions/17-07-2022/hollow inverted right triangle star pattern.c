#include<stdio.h>
int main()
{
    int N;
    printf("Enter row number: ");
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        for(int j=i; j<=N; j++)
        {
            if(i==1 || i==N || j==i || j==N)
                printf("* ");
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    return 0;
}




