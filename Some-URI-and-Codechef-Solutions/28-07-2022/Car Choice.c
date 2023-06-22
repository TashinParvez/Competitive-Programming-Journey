#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x1,x2,y1,y2;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d%d",&x1,&x2,&y1,&y2);

// x = millage
// y = taka

        if(y1<y2)
        {
            if(y1*x1>y2*x2)
                printf("−1\n");
            else if(y1*x1<y2*x2)
                printf("1\n");
            else
                printf("0\n");
        }
        else if(y1>y2)
        {
            if(y1*x1<y2*x2)
                printf("1\n");
            else if(y1*x1>y2*x2)
                printf("-1\n");
            else
                printf("0\n");
        }
        else
        {
            printf("0\n");
        }

    }

    return 0;
}

