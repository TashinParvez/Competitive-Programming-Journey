#include<stdio.h>
int printPerfectNumber(int lowestNumber,int higgestNumber)
{
    int i=lowestNumber;
    while(i<=higgestNumber)
    {
        if(i==1)
        {
            i++;
            continue;
        }
        int sum=0;
        for(int j=1; j<i; j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d ",i);
        i++;
    }
}
int main()
{
    int lowestNumber,higgestNumber;
    printf("Input lowest numbers : ");
    scanf("%d",&lowestNumber);
    printf("Input highest numbers : ");
    scanf("%d",&higgestNumber);

    printPerfectNumber(lowestNumber,higgestNumber);

    return 0;
}

