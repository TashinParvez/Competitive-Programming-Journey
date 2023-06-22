#include<stdio.h>
int main()
{

    int x,y,sum;
    sum=0;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        scanf("%d",&y);
        for(int j=1; j<y; j++)
        {
            if(y%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==y){
            printf("%d eh perfeito\n",y);
        }
        else{
            printf("%d nao eh perfeito\n",y);
        }
        sum=0;

    }


    return 0;
}



