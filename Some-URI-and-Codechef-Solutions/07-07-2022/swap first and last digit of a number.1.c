#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);

    int count =0,a=n;
    for(int i=0; i<i+1; i++)
    {
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

    int arr[count];

    int last=n%10;
    int first= n/pow(10,(count-1));

    for(int i=count-1;i>=0;i--){
        arr[i]=n%10;
        n=n/10;
    }

    arr[0]=last;
    arr[count-1]=first;

    for(int i=0;i<=count-1;i++){
       printf("%d",arr[i]);
    }

    return 0;
}
