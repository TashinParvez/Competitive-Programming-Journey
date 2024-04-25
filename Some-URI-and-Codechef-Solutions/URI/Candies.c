#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);

        int arr[2*n];
        n=n*2;
        int arr1[2*n];

        for(int i=0; i < 2*n; i++)
        {
            scanf("%d",&arr[i]);

            for(int j=0; j<i; j++)
            {
                if(arr[i]==arr[j])
                {
                    arr1[j]++;
                    i--;
                    break;
                }
            }
        }
        int flag =0;
        for(int i=0; i<2*n; i++)
        {
            if(arr1[i]>2)
            {
                flag =1;
                break;
            }
        }

        if(flag==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }
    return 0;
}

