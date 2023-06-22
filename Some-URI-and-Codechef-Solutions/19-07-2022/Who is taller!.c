#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
int x,y;
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        printf("A\n");
        else
        printf("B\n");




    }
    return 0;
}

