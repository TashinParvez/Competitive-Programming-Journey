#include<stdio.h>
int main()
{
    int N,sum=0;
    scanf("%d",&N);

    int x,y;
    for(int i=1; i<=N; i++)
    {
        scanf("%d%d",&x,&y);
        sum=0;

            if(x<y)
        {
            for(int k=x+1; k<y; k++)
            {
                if(k%2!=0)
                {
                    sum=sum+k;
                }
            }
        }
        else if(x>y)
        {
            for(int k=y+1; k<x; k++)
            {
                if(k%2!=0)
                {
                    sum=sum+k;
                }
            }
        }
        printf("%d\n",sum);





    }

    return 0;
}

