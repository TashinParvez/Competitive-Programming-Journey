#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("ENTER ARRAY SIZE ");
    scanf("%d",&n);
    int arr[n][n];
    int max,max2;
    max=max2=INT_MIN;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);

            if(arr[i][j]>max)
            {
                max2=max;
                max=arr[i][j];
            }
            else if(arr[i][j]>max2 && arr[i][j]<max)
            {
                max2=arr[i][j];
            }

        }
    }

    printf("Max value %d\n",max);
    printf("Second Max value %d\n",max2);

    return 0;
}
