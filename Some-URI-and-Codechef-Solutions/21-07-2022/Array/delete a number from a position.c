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
    int position;
    printf("Enter position : ");
    scanf("%d",&position);

    arr[position]=delete;

    for(int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }







    return 0;
}

