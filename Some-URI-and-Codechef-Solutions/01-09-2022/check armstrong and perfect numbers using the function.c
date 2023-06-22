#include<stdio.h>
#include<math.h>
void armstrongNumberCheck(int n)
{
    int num=n, digits=0;
    while(n)
    {
        int lastDigit=n%10;
        digits++;
        n=n/10;
    }
    n=num;

    int sum=0;
    while(n)
    {
        int lastDigit=n%10;
        sum+=pow(lastDigit,digits);
        n=n/10;
    }

    if(sum==num)
        printf("Yes, its a armstrong Number.\n");
    else
        printf("No, its a armstrong Number.\n");
}
void perfectNumberCheck(int n)
{
    int sum=0, num=n;
    int i=1;
    while(i<=num)
    {
        if(num%i==0)
            sum+=i;
        i++;
    }

    if(sum==num)
        printf("Yes, It's a perfect Number.\n");
    else
        printf("Yes, It's a perfect Number.\n");

}

int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    armstrongNumberCheck(n);
    perfectNumberCheck(n);

    return 0;
}

