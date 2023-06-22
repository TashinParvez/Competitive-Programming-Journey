#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int mix;
    int n,a,b,c,d;
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        scanf("%d%d%d%d",&a,&b,&c,&d);

        mix=a;

        if(b>mix)
            mix=b;

        if(c>mix)
            mix=c;

        if(d>mix)
            mix=d;

        printf("%d\n",mix);

    }
    return 0;
}




