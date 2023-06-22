#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int x,y,a;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d",&x,&y,&a);
        if(a>=x && a<y)
            printf("YES\n");
        else
            printf("NO\n");

    }




    return 0;
}

