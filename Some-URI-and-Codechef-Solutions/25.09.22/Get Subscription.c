#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x<=30)
            printf("No\n");
        else
            printf("Yes\n");
    }


    return 0;
}
