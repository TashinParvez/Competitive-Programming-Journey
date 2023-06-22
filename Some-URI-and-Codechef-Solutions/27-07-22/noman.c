#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int arr[n][10];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<10; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int i=0; i<n; i++)
            {
                count=0;
                if(arr[i][0]<arr[i][1])
                {
                    for(int j=1; j<=8; j++)
                    {

                        if(arr[i][j]>arr[i][j+1])
                        {
                            count=1;
                        }
                    }
                }
                else
                {
                    for(int j=1; j<=8; j++)
                    {
                        if(arr[i][j]<arr[i][j+1])
                        {
                            count =1 ;
                        }
                    }
                }
                if(count==1)
                    printf("Unordered\n");
                else
                    printf("Ordered\n");


            }

        }

    }




    return 0;
}

