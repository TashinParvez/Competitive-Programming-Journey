#include<stdio.h>
int main()
{
    int N,x,y;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");

        }
        else
            printf("%.1f\n",(float)x/y);

    }

    return 0;
}

