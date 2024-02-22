#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int r1;
    long long int product =1;
    for(int i =1; i<=t; i++)
    {
        product =1;
        scanf("%lld",&r1);

        for(int j = r1;j>=2;j--)
           product*=j;


        printf("%lld\n",product);

    }
    return 0;
}
