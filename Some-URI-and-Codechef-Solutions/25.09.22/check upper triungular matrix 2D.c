#include<stdio.h>
int main()
{
    printf("Enter matrix height: ");
    int n;
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter matrix Elements: ");

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&arr[i][j]);
    int count =0;
    int j;

    int product=1,sum=0;

    for(int i=0,j=0; i<n,j<n; i++,j++)
    {
        for(int p=i+1; p<n; p++)
            if(arr[p][j]!=0)
                count=1;

        product*=arr[i][j];
        sum+=arr[i][j];
    }

    if(count==1)
        printf("%d\n",sum);
    else
        printf("%d\n",product);

    return 0;
}

