#include<stdio.h>
int main()
{
    int n,count=0,sum =0;
    scanf("%d",&n);

    for(int i=2; i<=n; i++)
    {
        count=0;
        if(i==2)
        {
            sum =sum+i;
            continue;
        }
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count<1)
        {
            sum =sum+i;
        }
    }

    printf("Sum = %d",sum);

    return 0;
}
