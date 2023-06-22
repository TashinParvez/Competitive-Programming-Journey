#include<stdio.h>
int main()
{

    // 1st array input

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // 2nd array input
    int m,count;
    scanf("%d",&m);
    int arr2[m];

    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }


    // conditions



//    for(int i=0; i<n; i++)



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if( arr[i]==arr2[j])
            {
                arr[i]=0;
                continue;
            }
        }
    }


    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            continue;
        else
        {
            printf("%d ",arr[i]);
        }

    }


    return 0;
}

