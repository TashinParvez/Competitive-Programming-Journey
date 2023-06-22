#include<stdio.h>
int main()
{
    int a,n,sum=0;
    scanf("%d",&a);

    for(int j=1; j<j+1; j++)
    {
        scanf("%d",&n);
        if(n>0)
            break;
    }
    int k=a;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
            sum+=a;
        else
        {
            sum+=k;
        }
        k=k+1;
    }

    printf("%d\n",sum);

    return 0;
}

