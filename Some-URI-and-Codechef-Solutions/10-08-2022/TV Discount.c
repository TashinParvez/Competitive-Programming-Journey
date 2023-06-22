#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a-c<b-d)
            printf("First\n");
        else if(a-c>b-d)
            printf("Second\n");
        else if(a-c==b-d)
            printf("Any\n");
    }

    return 0;
}

