#include<stdio.h>
int main()
{

    int n;
    printf("Enter the total element number ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("sum = %d",sum);

    return 0;
}
