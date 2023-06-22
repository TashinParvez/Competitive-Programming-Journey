#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);

    int digit,lest;
    int m=a;

    for(int i=0; i<i+1; i++)
    {
        lest=m%10;
        digit=digit+1;
        m=m/10;
        if(m<10)
        {
            digit=digit+1;
            break;
        }
    }

    int arr[digit];
    int n;
    for(int i=0; i<digit; i++)
    {
        n=a%10;
        arr[i]=n;
        a=a/10;
    }

    for(int i=0; i<digit; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

