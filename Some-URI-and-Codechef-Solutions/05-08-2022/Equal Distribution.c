#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if((a+b)%2!=0)
            printf("No\n");
        else
        {
            printf("Yes\n");
        }


    }

    return 0;
}

