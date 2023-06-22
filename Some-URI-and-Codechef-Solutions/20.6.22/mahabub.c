#include<stdio.h>
int main()
{
    float s,increase,total;
    printf("Enter current salary: ");
    scanf("%f",&s);

    if(s>=0 && s<=40000.00)
    {
        increase=((15*s)/100);
        total=increase+s;

        printf("Percentage increase: 15%% \n");
        printf("Total increase: %f\n",increase);
        printf("Total salary: %f",total);
    }

    else if(s>40000.00 && s<=80000.00)
    {
        increase=((12*s)/100);
        total=increase+s;

        printf("Percentage increase: 12%% \n");
        printf("Total increase: %f\n",increase);
        printf("Total salary: %f",total);
    }

   else if(s>80000.00 && s<=120000.00)
    {
        increase=((10*s)/100);
        total=increase+s;

        printf("Percentage increase: 10%% \n");
        printf("Total increase: %f\n",increase);
        printf("Total salary: %f",total);
    }

   else if(s>120000.00 && s<=200000.00)
    {
        increase=((7*s)/100);
        total=increase+s;

        printf("Percentage increase: 7%% \n");
        printf("Total increase: %f\n",increase);
        printf("Total salary: %f",total);
    }

   else if(s>=200000)
    {
        increase=((4*s)/100);
        total=increase+s;

        printf("Percentage increase: 4%% \n");
        printf("Total increase: %f\n",increase);
        printf("Total salary: %f",total);
    }


    return 0;
}
