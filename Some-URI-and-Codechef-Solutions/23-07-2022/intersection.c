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


    int m,coount;
    scanf("%d",&m);
    int arr2[m];

    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if( arr[i]==arr2[j])
            {
                printf("%d ",arr[i]);
                coount+=1;
            }

        }
    }

    if(coount==0)
        printf("Empty Set\n");


    return 0;
}
