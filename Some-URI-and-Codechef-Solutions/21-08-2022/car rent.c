#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x<=300)
            printf("%d\n",3000);
        else
        {
            printf("%d\n",x*10);
        }
    }
    return 0;
}
