#include<stdio.h>
int main()
{
    int t;
    //scanf("%d",&t);
    char ar[20];
    //scanf("%s",&ar);



    int unit;
    scanf("%d",&unit);
    float amount=0.0;

    if(unit>50)
    {
        amount=amount + 50*1.0;
        unit=unit-50;
        if(unit>100)
        {
            amount=amount + 100*1.25;
            unit=unit-100;
            if(unit>150)
            {
                amount=amount + 150*1.50;
                unit=unit-150;

                if(unit>200)
                {
                    amount=amount + unit*2.0;
                }
                else
                {
                    amount=amount+unit*2.0;
                }

            }
            else
            {
                amount=amount + unit*1.50;
            }
        }

        else
        {
            amount= amount + unit*1.25;
        }
    }
    else
        amount=unit*1.0;


    if(amount<75)
        amount=75;
    else if(amount>=250)
        amount=amount+amount*15.0/100.0;

    // printf("Customer ID: %d\n",t);
    printf("Customer ID: %f\n",amount);

main();

    return 0;
}

