#include<stdio.h>
int main()
{
    int m,n,sum=0;
    while(1)
    {
        scanf("%d%d",&m,&n);
        sum=0;
        if(m<=0 || n<=0)
            break;
        if(m<n)
        {
            for(int i=m; i<=n; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }
        }
        else if(m>n){
                for(int i=n; i<=m; i++)
            {
                sum=sum+i;
                printf("%d ",i);
            }

        }

        printf("Sum=%d\n",sum);

    }
    return 0;
}

