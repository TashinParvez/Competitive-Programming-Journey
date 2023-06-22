#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            sum=sum+arr[i];
    }

    printf("%d\n",sum);

    return 0;
}
