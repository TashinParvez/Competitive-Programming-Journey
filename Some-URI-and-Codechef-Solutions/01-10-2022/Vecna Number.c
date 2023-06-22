#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    for(int i=n; i<m; i++)
    {
        if(i%10==1)
        {
            int rev=0;
            int mNum=i;
            int sum=0;
            int lastDigit;
            while(mNum>0)
            {
                lastDigit= mNum%10;
                sum+=lastDigit;
                rev= rev*10 +lastDigit;
                mNum=mNum/10;
            }

            if(lastDigit==1 && i!=rev && (sum*sum)%8==0)
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}

