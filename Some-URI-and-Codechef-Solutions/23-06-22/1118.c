#include<stdio.h>
int main()
{

    int x;
    double a,b;
    double avg;

    while(1)
    {

        while(1)
        {
            scanf("%lf",&a);
            if(a>=0 && a<=10)
                break;
            else
                printf("nota invalida\n");
        }


        while(1)
        {
            scanf("%lf",&b);
            if(b>=0 && b<=10)
                break;
            else
                printf("nota invalida\n");
        }
        avg=(a+b)/2;
        printf("media = %.2lf\n",avg);



        while(1)
        {
            scanf("%d",&x);
            printf("novo calculo (1-sim 2-nao)\n");

            if(x==2 || x==1)
                break;
        }




        if(x==2)
            break;
        else if(x==1)
            continue;
    }

    return 0;
}



