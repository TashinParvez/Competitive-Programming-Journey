#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sum=0;
    int multi=1,lastdigit;
    int mainnum=n;
    while(n>0)
    {
        multi=1;
        lastdigit=n%10;
        for(int i=1; i<=lastdigit; i++)
        {
            multi=multi*i;
        }
        sum=sum+multi;
        n=n/10;
    }

    if(sum==mainnum)
        printf("Yes Strong Num\n");
    else
        printf("No Its not\n");

    return 0;
}

