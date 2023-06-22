#include<stdio.h>
int main()
{

    int T;
    scanf("%d",&T);
    int x,y;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d",&x,&y);
        x=x*3;
        y=y*2;

        if(x<y)
            printf("%d\n",x);
        else
            printf("%d\n",y);


    }



    return 0;
}

