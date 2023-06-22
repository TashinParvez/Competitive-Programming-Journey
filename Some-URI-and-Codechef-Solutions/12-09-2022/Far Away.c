#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        long long n,m;
        scanf("%ld%ld",&n,&m);
        long long arr[n];

        long long sum=0;
        for(int j=0; j<n; j++)
        {
            scanf("%ld",&arr[j]);
            long long a=arr[j]-1;
            if(a<0)
                a=-a;
            int b=arr[j]-m;
            if(b<0)
                b=-b;

            if(a>b)
                sum+=a;
            else
            {
                sum+=b;
            }
        }
        printf("%ld\n",sum);
    }


    return 0;
}

