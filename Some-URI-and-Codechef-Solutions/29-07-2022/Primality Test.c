#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n,count=0;;
        scanf("%d",&n);
        if(n==1)
            count=1;
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                count=1;
                break;
            }
        }

        if(count==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

