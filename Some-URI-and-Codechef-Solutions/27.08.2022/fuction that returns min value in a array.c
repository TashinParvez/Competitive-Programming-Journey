#include<Stdio.h>
#include<limits.h>
void findMinimum(int arr[],int n)
{
    int min=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%d",min);

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    findMinimum(arr,n);
    return 0;
}
