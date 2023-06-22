#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int a,b,x;
    int countYear;
    for(int i=1; i<=T; i++)         // b target to pass or equal
    {
        countYear=0;
        scanf("%d%d%d",&a,&b,&x); // a current charge
        // x increase per year

        while(a<b)
        {
            if(a<b)
            {
                countYear=countYear+1;
                a=a+x;
            }
        }
        printf("%d\n",countYear);
    }

    return 0;
}

