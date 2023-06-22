#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int arr[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<t; i++)
    {
        int count=0;

        while(1)
        {
            int last=arr[i]%10;
            if(last==4)
                count+=1;
            arr[i]=arr[i]/10;
            if(arr[i]==0)
                break;
        }
        printf("%d\n",count);

    }

    return 0;
}

