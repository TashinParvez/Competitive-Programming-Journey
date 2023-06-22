#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        x=x*5+y*10;

        printf("%d\n",x/z);
    }

    return 0;
}
