#include<stdio.h>
int main()
{
    int z,x;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&z);
        if(z>x)
            break;
    }

    int sum=0,i=0;

    for(int j=x; j<100; j++)
    {
        sum=sum+j;
        i=i+1;

        if(sum=z)
        {
            break;
        }
        else if(sum>z)
        {
            break;
        }
    }

    printf("%d\n",i);

    return 0;
}

