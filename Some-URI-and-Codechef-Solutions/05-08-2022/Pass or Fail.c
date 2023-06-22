#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n,x,p;
        scanf("%d%d%d",&n,&x,&p);
        x=x*3+((n-x)*-1);

        if(x<p)
            printf("Fail\n");
        else
            printf("Pass\n");

    }

    return 0;
}

