#include<stdio.h>
int factorialVaue(int n)
{
    if(n==0)
        return 1;
    return n*factorialVaue(n-1);
}
int checkStrong(int i)
{
    int mainNum=i;
    int sum=0;
    while(i)
    {
        int lastDigit=i%10;
        sum+= factorialVaue(lastDigit);
        i=i/10;
    }
    if( sum==mainNum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void strongNumber(int l,int h)
{
    for(int i=l; i<=h; i++)
    {
        if(checkStrong(i))
        {
            printf("%d ",i);
        }
    }

}
int main()
{
    printf("\nEnter lower range ");
    int l;
    scanf("%d",&l);
    printf("Enter higger range ");
    int h;
    scanf("%d",&h);

    strongNumber(l,h);

    main();
    return 0;
}


