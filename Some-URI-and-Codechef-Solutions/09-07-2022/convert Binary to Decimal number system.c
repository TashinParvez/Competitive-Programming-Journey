#include<stdio.h>
#include<math.h>
int main()
{

    int num;
    scanf("%d",&num);
    int sum=0,digit=0;
    int n=num,nn;
    while(n>0)
    {
        digit =digit+1;
        n=n/10;
    }


    int lastdigit;
    for(int i=0; i<digit; i++)
    {
        lastdigit=num%10;
        sum = sum+ lastdigit*pow(2,i);
        num=num/10;
    }
    printf("Decimal = %d",sum);



    return 0;
}

