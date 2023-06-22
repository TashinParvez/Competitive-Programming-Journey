#include<stdio.h>
int main()
{
    float a;
    float money =0;
    scanf("%f",&a);

    float b = a-100;
    float c = b-100;
    float d = c-150;
    float e = d-150;


    if(b>0)
    {
        money = 100*0.50;
        if(c>0)
        {
            money= money+(100*0.75);

            if(d>0)
            {
                money=money+(150*1.25);

                if(e>0)
                {
                    money=money+(150*2);
                    money = money+ 3.50*e;
                    printf("money = %f",money);
                }
                else
                {
                    money=money + e*2;
                    printf("money = %f",money);
                }

            }
            else
            {
                money=money +  c*1.25;
                printf("money = %f",money);
            }
        }
        else
        {
            money=money + b*0.75;
            printf("money = %f",money);
        }
    }
    else
    {
        money= a*0.50;
        printf("money = %f",money);
    }
    return 0;
}
