#include<stdio.h>
int main()
{

    int bnum;
    scanf("%d",&bnum);

    int totalbit=0,mnum=bnum;
    while(bnum>0)
    {
        totalbit=totalbit+1;
        bnum=bnum/10;
    }
    int dnum=0,lastbit;
    for(int i=0; i<totalbit; i++)
    {
        lastbit=mnum%10;
        dnum=dnum+(lastbit*pow(2,i));
        mnum=mnum/10;
    }

    printf("Decimal Num %d\n",dnum);

    return 0;
}
