#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
int x,y,z;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d",&x,&y,&z);

        x=x+y;

        if(x<=z)
            printf("Yes\n");
        else
            printf("No\n");

    }


    return 0;
}

