#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int x;
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&x);

        if(x>=1 && x<=4)
            printf("Yes\n");
        else
            printf("No\n");

    }


    return 0;
}

