#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            b[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    if(a[i]==-1 || b[j]==-1)
                        continue;
                    a[j]=-1;
                    b[i]+=1;
                }
            }
        }
        int larg=0;

        for(int i=0; i<n; i++)
        {
            if(b[i]>larg)
            {
                larg=b[i];
                a[0]=i;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[0]==i)
                continue;
            if(b[i]==larg)
                larg=0;
        }
        if(larg==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}

