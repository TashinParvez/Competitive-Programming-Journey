#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    int q=0,p;
    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);

        if(n>=100)
        {

            if(n/100>10)
                printf("-1\n");

            p=n/100;
            n=n%100;
            if(n!=0 && n<100)
            {

                p=p+n;
                if(p>10)
                    printf("-1\n");
                else
                {

                    printf("%d\n",p);
                }

            }
            else{
                    printf("%d\n",p);

            }
        }
        else
        {
            if( n<=10 )
                printf("%d\n",n);
            else
            {
                printf("-1\n");

            }

        }

    }
    return 0;
}
