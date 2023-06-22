#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    double r1,r2,b;

    double runRate, requredRunRate;
    for(int i =1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&b);

        double playedBall = 300-b;

        runRate = ((r2 *6*1.0)/ playedBall)*1.0;

        requredRunRate = (((r1-r2+1) *6) / b)*1.0;
        if(r2>r1)
            requredRunRate=0;

        printf("%.2lf %.2lf\n",runRate,requredRunRate);

    }
 return 0;

}
