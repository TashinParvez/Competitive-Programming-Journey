#include<stdio.h>
int main()
{
    int N;
    printf("Enter row number: ");
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        for(int k=1; k<=N-i; k++)
        {
            printf("  ");
        }
        for(int j=1; j<=N; j++)
        {
            if(i>1 && i<N)
            {
                if(j==1 || j==N)
                    printf("* ");
                else
                    printf("  ");
            }
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}

