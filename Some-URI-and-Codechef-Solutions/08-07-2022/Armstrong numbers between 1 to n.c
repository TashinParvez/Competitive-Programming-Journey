#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);

    int i=1;
    int a;
    int n=a;
    int nn=n, pp, count=0;

    for(i; i<=x; i++)
    {

        a=i;
        n=a;
        nn=n;
        count=0;


        while(nn>0)
        {
            pp=nn%10;
            count=count+1;
            nn=nn/10;
        }


        int mm,sum =0;

        while(n>0)
        {
            mm=n%10;
            sum= sum + pow(mm,count);
            n=n/10;
        }

        if(sum==a)
        {
            printf("%d \n",a);
        }
        else
            continue;


    }
    return 0;
}


