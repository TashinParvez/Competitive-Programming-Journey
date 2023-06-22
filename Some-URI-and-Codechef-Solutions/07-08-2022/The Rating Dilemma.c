#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==0)
        {
            if(b==1 || c==1)
                printf("1\n");
            else
                printf("0\n");

        }
        else
        {
            if(b==0 || c==0)
                printf("1\n");
            else
                printf("0\n");
        }

    }

    return 0;
}
