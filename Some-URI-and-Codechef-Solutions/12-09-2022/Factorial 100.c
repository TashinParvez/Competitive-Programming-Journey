#include<stdio.h>
int main()
{
    int t, count2=0,count5=0;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        count2=0,count5=0;

        int n;
        scanf("%d",&n);

        int num;
        for(int j=1; j<=n; j++)
        {
            num = j;
            while(num>0)
            {
                if(num%5==0)
                {
                    count5++;
                    num/=5;
                }
                else if(num%2==0)
                {
                    count2++;
                    num/=2;
                }
                else
                    break;
            }
        }

        if(count2<count5)
            printf("%d\n",count2);
        else
            printf("%d\n",count5);
    }
    return 0;
}
