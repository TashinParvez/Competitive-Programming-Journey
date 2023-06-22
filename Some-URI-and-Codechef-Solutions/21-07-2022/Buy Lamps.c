#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int N, K, X, Y,redCost,blueCost;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d%d",&N, &K, &X, &Y);

        if(K==0)
        {
            redCost = N*X;
            blueCost=N*Y;
            if(blueCost<redCost)
                printf("%d\n",blueCost);
            else
            {
                printf("%d\n",redCost);
            }

        }
        else
        {
            redCost=K*X;
            N=N-K;
            if(X>Y){

            blueCost=N*Y;
            printf("%d\n",blueCost+redCost);
            }
            else{
            blueCost=N*N;
            printf("%d\n",blueCost+redCost);

            }
        }
    }

    return 0;
}

