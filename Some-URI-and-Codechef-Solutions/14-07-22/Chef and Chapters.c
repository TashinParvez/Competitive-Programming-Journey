#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int x,y,z;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        x=x*y*z;
        printf("%d\n",x);

    }


    return 0;
}
