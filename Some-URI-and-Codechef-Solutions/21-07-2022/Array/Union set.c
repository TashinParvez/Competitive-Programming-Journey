#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int nn;
    scanf("%d",&nn);

    int arr2[nn];
    for(int i=0; i<nn; i++)
    {
        scanf("%d",&arr2[i]);
    }



    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }


    for(int i=0; i<nn; i++)
    {
        count=0;
        for(int j=0; j<n; j++)
        {
            if(arr2[i]==arr[j])
            {
                count+=1;
            }
        }
        if(count==0)
            printf("%d ",arr2[i]);
    }

    return 0;
}
