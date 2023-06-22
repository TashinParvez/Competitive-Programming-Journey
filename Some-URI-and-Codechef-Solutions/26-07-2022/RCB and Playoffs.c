#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x,y,z;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d",&x,&y,&z);

        x=x+(z*2);
        if(x>=y)
            printf("Yes\n");
        else
            printf("No\n");
    }


    return 0;
}

