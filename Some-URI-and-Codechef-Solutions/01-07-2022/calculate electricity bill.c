#include<stdio.h>
int main()
{
    float bill=0.0, unit;
    scanf("%f",&unit);

    if(unit<=50)
    {
        bill = unit*0.50;
    }
    else if(unit<=150)
    {
        bill = 25.0 +((unit-50)* 0.75);
    }
    else if(unit<=250)
    {
        bill = 25 + 75 +((unit-150)*1.20);
    }
    else if(unit>250)
    {
        bill = 25 + 75 +(100*1.20)+((unit-250)*1.50);
    }


    float bill2 = bill*(20.0/100.0);
    bill=bill+bill2;
    printf("Bill = %.2f",bill);

    return 0;
}


