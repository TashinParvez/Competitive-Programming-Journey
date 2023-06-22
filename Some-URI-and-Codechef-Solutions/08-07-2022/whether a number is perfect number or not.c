#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);

    int p;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(n==sum){
        printf("Its perfect Num");
    }
    else{
        printf("Its not perfect Num");
    }

    return 0;
}

