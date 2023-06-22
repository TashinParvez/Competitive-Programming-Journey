#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,k,m;
    int totalCandle,bag,n1,n2;
    for(int i = 1; i<=t; i++)
    {
        bag=0;
        scanf("%d%d%d",&n,&k,&m);
        totalCandle = k*m;

        if(n<=totalCandle)
        {
            bag=1;
        }
        else
        {
            n1= n/totalCandle;

            bag=bag+n1;
            n= n%totalCandle;
        if(n<=totalCandle && n!=0)
                bag=bag+1;
        }

        printf("%d\n",bag);
    }

    return 0;
}





