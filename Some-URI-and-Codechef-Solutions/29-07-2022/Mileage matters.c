#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y,a,b;
        scanf("%d%d%d%d%d",&n,&x,&y,&a,&b);
        float p=(float)(n/a);
        float d=(float)(n/b);
        p=p*x;
        d=d*y;

        if(p<d)
            printf("PETROL\n");
        else if(d<p)
            printf("DIESEL\n");
        else
            printf("ANY\n");

    }
    return 0;
}

