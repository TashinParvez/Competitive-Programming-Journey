#include<stdio.h>
int main()
{

    float a,b;
    while(1)
    {
        scanf("%f",&a);
        if(a>=0 && a<=10)
            break;
        else
            printf("nota invalida\n");

    }
    while(1)
    {
        scanf("%f",&b);
        if(b>=0 && b<=10)
            break;
        else
            printf("nota invalida\n");
    }
    float avg=(a+b)/2;
    printf("media = %.2f\n",avg);
    return 0;
}
