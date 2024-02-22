#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int r1,r2,b;

    double runRate, requredRunRate;
    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d",&r1,&r2,&b);

        runRate = ((double)r2 *6)/ ((50*6)-b);
        requredRunRate = ((r1-r2+1) * 6) / (double)b;

        printf("%.2lf %.2lf\n",runRate,requredRunRate);

    }
    return 0;
}

