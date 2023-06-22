#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n=a;
    int nn=n,pp,count=0;

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
        printf("YES, It's a Armstrong number\n");
    }
    else
        printf("No, It's not a Armstrong number\n");


    return 0;
}

