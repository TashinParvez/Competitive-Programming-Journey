#include<stdio.h>
int main()
{

    int a,x,y,sum;
    scanf("%d",&a);

    for(int i=1; i<=a; i++)
    {
        scanf("%d%d",&x,&y);
        if(x%2==0)
            x=x+1;

        for(int j=1; j<=y; j=j+1)
        {

            sum=sum+x;
            x=x+2;
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}


