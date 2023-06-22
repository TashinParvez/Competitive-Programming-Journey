#include<stdio.h>
int main()
{

    int T;
    scanf("%d",&T);
    int a,b,c;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if((a<b && b<c )  || (c<b && b<a))
            printf("%d\n",b);
        else if((b<a && a<c) || (c<a && a<b))
            printf("%d\n",a);
        else if((a<c && c<b) || (b<c && c<a))
            printf("%d\n",c);

    }


    return 0;
}

