#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int bun,patty;

    for(int i =1; i<=t; i++)
    {

        scanf("%d%d",&bun,&patty);

        if(bun<patty)
            printf("%d\n",bun);
        else
            printf("%d\n",patty);

    }

    return 0;
}
