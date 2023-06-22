#include<stdio.h>
int main()
{

    int T,x;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&x);
        x=x%10;
        printf("%d\n",x);

    }



    return 0;
}

