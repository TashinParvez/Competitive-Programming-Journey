#include<stdio.h>
int main()
{
    int t,a,b,n;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&n);

        if(a==b)
        {
            printf("-1\n");
        }
        else
        {
            for(n; n<n+1; n++)
            {
                printf("This line %d\n",n);  // have to remove
                if(n%a==0 && n%b!=0)
                {
                    printf("%d\n",n);
                    break;
                }
            }
        }
    }
    return 0;
}
