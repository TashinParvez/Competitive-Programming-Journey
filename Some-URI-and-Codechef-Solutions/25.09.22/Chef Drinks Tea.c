#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        int n=x/y;
        if(x%y>>0)
            n++;
        printf("%d\n",n*z);

    }


    return 0;
}
