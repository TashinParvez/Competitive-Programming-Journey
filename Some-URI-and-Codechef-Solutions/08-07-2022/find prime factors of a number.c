#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int count =0;
    for(int i=2; i<=num; i++)
    {
        count =0;
        if(i==2)
        {
            if(num%2==0)
                printf("%d",i);
        }
        else
        {
            for(int j=2; j<=i; j++)
            {
                if(i%j==0)
                    count=count+1;
            }
            if(count==0){
                if(num%i==0){
                    printf("%d",i);
                }
            }
        }
    }

    return 0;
}
