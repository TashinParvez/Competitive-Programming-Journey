#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        int count =0;
        int n,p=0,q=0,u,v;

        scanf("%d",&n);
        for(int j=1; j<=n; j++)
        {
            scanf("%d%d",&u,&v);
            if(u!=p && u!=q)
                count+=1;
            if(v!=p && u!=q)
                count+=1;
            p=u;
            q=v;
        }

        printf("Case %d: %d\n",i,count);
    }

    return 0;
}
