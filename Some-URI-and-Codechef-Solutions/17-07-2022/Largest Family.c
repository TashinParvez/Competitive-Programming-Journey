#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    int n,count;
    for(int i=1; i<=T; i++)
    {
        count=0;
        scanf("%d",&n);  // n = Total people
        int arr[n];
        for(int j=0; j<=n-1; j++)
        {
            scanf("%d",&arr[j]);
        }


        for(int j=0;j<n-1;j++){
                if(arr[j]<n && arr[j]<=n-1){
                    count+=1;
                }
        }

printf("%d\n",count);




    }

    return 0;
}
