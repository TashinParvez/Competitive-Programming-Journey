#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int X,Y,Z,needTime,count=0;
    for(int i=1; i<=T; i++)
    {
        needTime=0;
        count=0;
        scanf("%d%d%d",&X, &Y,&Z);


        needTime=X*Y;


        for(int j=0; j<j+1; j++)
        {
            X=X-3;
            if(X>0)
                count=count+1;
            else if(X<=0)
            {
                break;
            }
        }
        needTime=needTime+(Z*count);


        printf("%d\n",needTime);




    }
    return 0;
}


