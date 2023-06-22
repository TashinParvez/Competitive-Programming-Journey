#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int x,y,a,b,count=0;
        scanf("%d%d%d%d",&x,&y,&a,&b);

        if(x!=a && x!=b)
        {
            count+=1;
        }
        if(y!=a && y!=b)
        {
            count+=1;
        }


        printf("%d\n",count);
    }





    return 0;
}

