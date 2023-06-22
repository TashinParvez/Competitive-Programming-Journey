#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    if(x==1)
    {
        printf("0");
    }
    else if(x==2)
    {
        printf("0 1");
    }
    else
    {
        int a=0,b=1,sum=0;
        printf("%d ",a);
        printf("%d ",b);
        for(int i=3; i<=x; i++)
        {
            sum=a+b;
            if(i==x){
            printf("%d\n",sum);
            }
            else{
            printf("%d ",sum);
            }
            a=b;
            b=sum;
        }

    }

    return 0;
}
