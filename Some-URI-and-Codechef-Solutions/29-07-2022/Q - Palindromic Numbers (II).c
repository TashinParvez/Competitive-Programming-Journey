#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int n;
    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);
        int nn=n,digit=0;

        while(1)
        {
            n=n/10;
            digit=digit+1;
            if(n==0)
            {
               //digit=digit+1;
                break;
            }
        }



        n=nn;
        int lastDigit,revNum=0;

        for(int j=digit-1; j>=0; j--) // j = 2
        {
            lastDigit=n%10; // 2
            revNum= revNum + lastDigit*pow(10,j);
            n=n/10; // 43
        }


        /// 432
        // digit 3





        if(revNum==nn)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);

    }
    return 0;
}

