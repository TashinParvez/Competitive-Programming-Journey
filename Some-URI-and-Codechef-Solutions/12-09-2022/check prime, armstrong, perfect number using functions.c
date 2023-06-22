#include<stdio.h>
#include<math.h>
void primeNumber(int n)
{
    if(n==2 || n==3)
    {
        printf("Number id prime\n");
        return 0;
    }
    for(int i=2; i<n,i!=n; i++)
        if(n%i==0)
        {
            printf("Number is not prime\n");
            return 0;
        }
    printf("Number is prime\n");
    return 0;
}
void armstrong(int n)
{
    int mainNum=n;
    int digit=0;
    while(mainNum)
    {
        digit++;
        mainNum=mainNum/10;
    }

    mainNum=n;
    int sum=0;
    int lastdigit;
    while(mainNum)
    {
        lastdigit = mainNum%10;
        sum+= pow(lastdigit,digit);
        mainNum= mainNum/10;
    }
    if(sum==n)
        printf("Yes armstrong\n");
    else
        printf("Not an armstrong\n");

}
void perfectNumber(int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        printf("Yes perfect Number\n\n");
    else
        printf("Not a perfect Number\n\n");
}
int main()
{
    printf("Enter a number ");
    int n;
    scanf("%d",&n);

    primeNumber(n);
    armstrong(n);
    perfectNumber(n);

    main();
    return 0;
}
