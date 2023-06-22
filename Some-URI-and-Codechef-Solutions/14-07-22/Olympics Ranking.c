#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int g1,s1,b1,g2,s2,b2;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d %d%d%d",&g1,&s1,&b1,&g2,&s2,&b2);
        g1=g1+s1+b1;
        g2=g2+s2+b2;

        if(g1>g2)
            printf("1\n");
        else
            printf("2\n");




    }


    return 0;
}

