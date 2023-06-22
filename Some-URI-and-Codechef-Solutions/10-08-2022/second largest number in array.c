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
    int large=arr[0], secLarge=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>large)
        {
            secLarge=large;
            large=arr[i];
        }
        else if(arr[i]>secLarge && arr[i]<large)
            secLarge=arr[i];
    }

    printf("second large num is %d\n",secLarge);


    return 0;
}

