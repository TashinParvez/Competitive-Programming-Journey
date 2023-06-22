#include<Stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int large = arr[0];
    int SecondLarge=-999;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
            arr[i]=-9999;
        }

    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>SecondLarge)
        {
            SecondLarge=arr[i];
        }
    }

    printf("\n\nLargest num is %d\n",large);
    printf("Second largest num is %d\n",SecondLarge);




    main();
    return 0;
}

