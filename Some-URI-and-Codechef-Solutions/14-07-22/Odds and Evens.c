#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int a,b,sum;
    for(int i=1; i<=T; i++)
    {
        sum=0;
        scanf("%d%d",&a,&b);
        sum=a+b;

        if(sum%2==0)
            printf("Bob\n");
        else
            printf("Alice\n");



    }


    return 0;
}

