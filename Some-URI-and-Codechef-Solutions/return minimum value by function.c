#include<stdio.h>
int minValueFunction(int arr[],int n)
{
    int min=arr[0];
    for(int i=0; i<n ; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;

}
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=minValueFunction(arr,n);


    printf("Minimum value %d\n",min);



    return 0;
}
