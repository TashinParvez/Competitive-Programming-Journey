#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double arr[n];

    double sum=0.0,avg;
    for(int i=0; i<n; i++)
    {
        scanf("%lf",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;

    printf("%.2lf\n",avg);

    return 0;
}
