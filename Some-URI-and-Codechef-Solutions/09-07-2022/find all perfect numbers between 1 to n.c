#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sum;
    for(int i=1; i<=n; i++)
    {
        //  number == i;

        sum=0;
        for(int j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d",i);
        }
    }
    return 0;
}
