#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int x,y;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d",&x,&y);

        if(y<=x)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
