#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    float num1,num2,num3;

   // for(int i=1; i<=N; i++)

    for(int i=1; i<=N; i++)
    {
        scanf("%f%f%f",&num1,&num2,&num3);
        float avg= (num1*2+num2*3+num3*5)/10;

        printf("%.1f\n",avg);
    }

    return 0;
}

