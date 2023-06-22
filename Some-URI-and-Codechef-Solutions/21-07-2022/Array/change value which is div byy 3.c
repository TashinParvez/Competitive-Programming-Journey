#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int position=1;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(i==position)
            arr[i]=0;
        position+=2;
    }
    for(int i=1; i<n; i+=2)
    {
        arr[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);

    }



    return 0;
}
