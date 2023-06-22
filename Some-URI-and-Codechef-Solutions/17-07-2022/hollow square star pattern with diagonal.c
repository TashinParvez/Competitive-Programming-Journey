#include<stdio.h>
int main()
{
    int N;
    printf("Enter row number: ");
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            if(i==1 || i==N)
            {
                printf("* ");
            }
            else if(i==2 || i==N-1)
            {
                if(j==3)
                    printf("  ");
                else
                    printf("* ");
            }
            else
            {
                if(j%2==0)
                    printf("  ");
                else
                    printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

