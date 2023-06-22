#include<stdio.h>
int main()
{
    //------------starting day---------
    int x;
    printf("Dia :");
    scanf("%d",&x);

    int m,n,o;

    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&o);

    //------------finishing day---------
    int y;
    printf("Dia :");
    scanf("%d",&y);

    int p,q,r;
    scanf("%d",&p);
    scanf("%d",&q);
    scanf("%d",&r);

//-----------------end of taking input--------------

    int mday=y-x-1;
    if(mday<0)
    {
        mday=0;
    }

    int ssec=m*3600+n*60+o;
    ssec=86400-ssec;

    int fsec=p*3600+q*60+r;

    int tsec=ssec+fsec;

    int day=tsec/86400;
    int hour=(tsec%86400)/3600;
    int min=((tsec%86400)%3600)/60;
    int sec=(((tsec%86400)%3600)%60)%60;

    printf("%d dia(s)\n",mday+day);
    printf("%d hora(s)\n",hour);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);



    return 0;
}
