#include<stdio.h>
int main()
{
    int n=1256;
    // scanf("%d",&n);

    int a=n;
    int count =0;
    for(int i=0; i<i+1; i++)
    {
        // count =count+1;
        if(a==0)
        {
            count =count+1;
            break;
        }
        if(a%10>-1)
        {
            count =count+1;
            if(a/10<10)
            {
                count =count+1;
                break;
            }
        }
        a=a/10;
    }
    printf("%d",count);

    int arr[count];
    int k=n;
    for(int i=0; i<=count-1; i++)
    {
        if(i==0)
        {
            arr[0]=k%10;
            k=k/10;
        }
        for(int i=count-1; i>=1; i--)
        {
            if(i==1){
                arr[count-1]=k;
                break;
            }
            arr[i-1]=k%10;
            k=k/10;
        }
    }

    for(int i=0; i<=count-1; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
