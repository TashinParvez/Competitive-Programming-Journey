#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);

        int n=x/4;
        if(x%4>0)
            n++;

        printf("%d\n",n);

    }


    return 0;
}
