#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    double q,p;
    double total,discount;

    for(int i=1; i<=t; i++)
    {
        total=0;
        scanf("%lf%lf",&q,&p);
        if(q>1000)
        {
            total= p*q;
            discount= ((p*10)/100)*q;
            total=total-discount;
        }
        else
        {
            total= total+p*q;
        }

        printf("%lf\n",total);

    }
    return 0;
}
