#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,p,q;
        scanf("%d%d%d",&x,&p,&q);


        printf("%d\n",(p-q)*x);
    }


    return 0;
}

