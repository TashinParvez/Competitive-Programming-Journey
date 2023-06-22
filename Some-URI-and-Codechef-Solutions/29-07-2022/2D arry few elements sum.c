#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(i==0)    // first
            {
                if(j<n/2+1 || j==n-1)
                {
                    sum+=arr[i][j];
                }
            }
            else if(i==n/2)       // middle
            {
                sum+=arr[i][j];
            }
            else if(i==n-1)   // last
            {
                if(j>=n/2 || j==0)
                {

                    sum+=arr[i][j];
                }

            }
            else   // others line
            {
                if(i<n/2+1)
                {
                    if(j==n/2 || j==n-1)
                    {

                        sum+=arr[i][j];
                    }

                }
                else
                {
                    if(j==n/2 || j==0)
                    {

                        sum+=arr[i][j];
                    }
                }
            }
        }
    }

    printf("Sum %d\n",sum);


    return 0;
}
