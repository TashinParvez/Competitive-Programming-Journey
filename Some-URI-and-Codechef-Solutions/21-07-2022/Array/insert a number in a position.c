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
    int num,position;
    printf("Enter your number: ");
    scanf("%d",&num);
    printf("Enter position: ");
    scanf("%d",&position);

    arr[position]=num;


    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }




    return 0;
}
