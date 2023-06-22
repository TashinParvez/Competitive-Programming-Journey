#include<stdio.h>
int main()
{

    int a=0,g=0,d=0;
    int k;

    while(1)
    {
        scanf("%d",&k);

        if(k==1)
            a=a+1;
        else if(k==2)
            g=g+1;
        else if(k==3)
            d=d+1;
        else if(k==4)
            break;

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);

    return 0;
}

