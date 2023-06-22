#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int n,x,y,sum;
    for(int i=1; i<=T; i++)
    {
        sum=0;
        scanf("%d%d%d",&n,&x,&y);
        sum=x*1+y*2;
        if(sum<=n)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");



    }


    return 0;
}

