#include<stdio.h>
#include<math.h>
int main()
{
    int b;
    scanf("%d",&b);  // take the num

    int digit=0,last;
    int mainNum=b,a=b;
                 // puting the num in another var
    while(a)
    {
        digit=digit+1;   // counting the digits
        a=a/10;
    }

    int sum =0,less=0;

    for(int i = digit-1; i>=0; i--)
    {
        less = b%10;
        sum =sum + less * pow(10,i);
        b=b/10;

        if(b<10)
        {
            less = b;
            sum =sum + b * pow(10,i-1);
            break;
        }

    }

    if(sum==mainNum)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
