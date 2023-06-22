#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int lest;

    for(int i=0; i<i+1; i++)
    {
        lest = n%10;
        sum=sum+lest;
        n=n/10;

        if(n<10)
        {
            lest =n;
            sum=sum+lest;
            break;
        }

    }

    printf("Sum = %d\n",sum);
    return 0;
}

