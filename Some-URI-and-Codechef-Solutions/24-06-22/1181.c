#include<stdio.h>
int main()
{
    int L;
    char c;
    scanf("%d\n%c",&L,&c);
    double sum=0, arr[12][12];

    for(int i=0; i<=11; i++)
    {
        scanf("%lf",&arr[L][i]);
        sum=sum+arr[L][i];
    }


    if(c=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(c=='M')
    {
        float avg=sum/12.0;
        printf("%.1lf\n",avg);
    }

    return 0;
}
