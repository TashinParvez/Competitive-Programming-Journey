#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int totalnumbers;
        scanf("%d",&totalnumbers);

        int arr[totalnumbers];
        for(int i=0; i<totalnumbers; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("[");

        for(int i=0; i<totalnumbers; i++)
        {
            int count=0;
            for(int j=0 ; j<totalnumbers; j++)
            {
                if(i==j)
                    continue;
                if(arr[j]<arr[i])
                    count++;
            }
            printf("%d",count);
            if(i+1!=totalnumbers)
                printf(",");
        }
        printf("]");
    }

    return 0;
}

