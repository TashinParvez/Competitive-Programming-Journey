#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    int m,count;
    scanf("%d",&m);
    int arr2[m];

    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }



    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }



    for(int j=0; j<m; j++)
    {

        for(int i=0; i<n; i++)
        {
            if( arr2[j]==arr[i])
            {
                count=0;
                continue;
            }
            else{
                count+=1;
            }

        }
        if(count!=0)
            printf("%d ",arr2[j] );
    }


    return 0;
}

