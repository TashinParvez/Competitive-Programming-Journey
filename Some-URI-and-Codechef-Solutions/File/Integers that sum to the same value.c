#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int count=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==1)
                count++;
        }

        if(n==2)
            printf("%s",arr);
        else
        {
            for(int i=0; i<n; i++)
            {
                if(i<n-count)
                    printf("%d",0);
                else
                {
                    printf("%d",1);
                }
            }

        }


    }

    return 0;
}
