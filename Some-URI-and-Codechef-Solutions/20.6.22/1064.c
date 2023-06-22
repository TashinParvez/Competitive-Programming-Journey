#include<stdio.h>
int main()
{

    float a,b,c,d,e,f,total=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

    int pos=0;
    if(a>=0)
    {

        total=total+a;
        pos=pos+1;
    }
    if(b>=0)
    {

        total=total+b;
        pos=pos+1;
    }
    if(c>=0)
    {

        total=total+c;
        pos=pos+1;
    }
    if(d>=0)
    {

        total=total+d;
        pos=pos+1;
    }
    if(e>=0)
    {

        total=total+e;
        pos=pos+1;
    }
    if(f>=0)
    {

        total=total+f;
        pos=pos+1;
    }

    float avg=total/pos;

    printf("%d valores positivos\n",pos);
    printf("%.1f\n",avg);
    return 0;
}
