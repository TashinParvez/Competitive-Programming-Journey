#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a,b;
    int count=0;
    for(int i=1; i<i+1; i++)
    {
        a=n;
        a=a*i;
        for(int j=1; j<j+1; j++)
        {
            b=m;
            b=b*j;
            if(b==a)
            {
                printf("%d",b);
                count=1;
                break;
            }
            else if(b>a)
            {
                break;
            }
        }
        if(count>0)
        {
            break;
        }

    }

    return 0;
}

