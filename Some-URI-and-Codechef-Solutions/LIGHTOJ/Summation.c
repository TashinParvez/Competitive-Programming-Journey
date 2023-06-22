#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int n;
    int sum=0;

    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n); // 5 digit
        sum=0;
        sum+=n%10;

        for(int i=1;i<5;i++)
            n/=10;

        sum+=n;
        printf("Sum = %d",sum);
        printf("\n");
    }
    return 0;
}

