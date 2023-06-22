#include<stdio.h>
int main()
{

    int x,sum;
        sum=0;
    for(int i=1; i<i+1; i++)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        if(x%2!=0)
            x=x+1;
        for(int j=1;j<=5;j++)
        {
            sum=sum+x;
            x=x+2;

        }
        printf("%d\n",sum);
        sum=0;
    }


    return 0;
}



