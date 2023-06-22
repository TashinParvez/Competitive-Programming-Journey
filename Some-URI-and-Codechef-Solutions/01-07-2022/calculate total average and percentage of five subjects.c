#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    float sum = m1+m2+m3+m4+m5;
    float avg = sum/5;
    float per =  (sum*100)/500;

    printf("\nTotal = %.2f\nAverage = %.2f\nPercentage = %.2f\n",sum,avg,per);

    return 0;
}
