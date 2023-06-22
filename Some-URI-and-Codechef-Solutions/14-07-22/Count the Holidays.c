#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int n;

    int holly=8;
    for(int i=1; i<=T; i++)
    {
        holly=8;
        scanf("%d",&n);
        int arr[n];

        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);

            if(arr[j]%7!=6 && arr[j]%7!=0)
            {
                holly=holly+1;
            }
        }
        printf("%d\n",holly);
    }


    return 0;
}

