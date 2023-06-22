#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int ele,count=0;
    for(int i=1; i<=t; t++)
    {
        scanf("%d",&ele);
        int arr[ele];
        for(int j=1; j<=ele; j++)
        {
            scanf("%d",&arr[j-1]);
        }
        for(int k=0; k<ele; k++)
        {
            if((arr[k]+arr[k+1])%2==0)
            {
                continue;
            }
            else
            {
                count=count+1;
                if((arr[k]+arr[k+2])%2==0)
                {
                    k++;
                    continue;
                }
                else
                {

                }

            }

        }

        printf("%d\n",count);
    }

    return 0;
}
