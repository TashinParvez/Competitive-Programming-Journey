#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;

    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++)
        {

            scanf("%d",&a[i]);
            sum+=a[i];
        }

        if(sum%2!=0)
        {
            printf("-1\n");
        }
        else if(sum%2==0 && sum!=0)
            printf("%d\n",(sum/2));
        else if(sum==0)
            printf("0\n");
    }

    return 0;
}

