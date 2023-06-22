#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        if((y-z)>=x)
            printf("Yes\n");
        else
            printf("No\n");

    }


    return 0;
}
