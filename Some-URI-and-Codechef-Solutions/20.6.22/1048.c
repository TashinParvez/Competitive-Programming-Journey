#include<stdio.h>
int main()
{
    float sal,n,r;
    int e;
    scanf("%f",&sal);

    if(sal>=0 && sal<=400.00)
    {
        e=15;
        r=(sal*e)/100;
        n=sal+r;
    }

    else if(sal>=400.01 && sal<=800.00)
    {
        e=12;
        r=(sal*e)/100;
        n=sal+r;
    }
    else if(sal>=800.01 && sal<=1200.00)
    {
        e=10;
        r=(sal*e)/100;
        n=sal+r;
    }
    else if(sal>=1200.01 && sal<=2000.00)
    {
        e=7;
        r=(sal*e)/100;
        n=sal+r;
    }
    else if(sal>=2000.01)
    {
        e=4;
        r=(sal*e)/100;
        n=sal+r;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",n,r,e);

    return 0;
}
