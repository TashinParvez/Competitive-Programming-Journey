#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        printf("%d\n",x-y+z);
    }

    return 0;
}

