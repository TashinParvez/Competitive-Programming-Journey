#include<stdio.h>
int main()
{
    float salary,Totaltax;
    scanf("%f",&salary);

    float t4,t3,t2;

    if(salary>4500)
    {
        t4=((salary-4500)*0.28)+(1500*.18)+(1000*.08);
        printf("R$ %.2f\n",t4);
    }
    else if(salary>=3000.01 && salary<=4500)
    {
        t3=((salary-3000)*.18)+(1000*.08);
        printf("R$ %.2f\n",t3);
    }
    else if(salary>=2000.01 && salary<=3000)
    {
        t2= (salary-2000)*.08;
        printf("R$ %.2f\n",t2);
    }
    else if(salary>=0 && salary<=2000.00)
    {
        printf("Isento\n");

    }

    return 0;
}

