#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int returnable,cost;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d",&returnable,&cost);
        if(cost<=returnable)
        printf("%d\n",cost);
        else
            printf("%d\n",returnable);

    }

    return 0;
}
