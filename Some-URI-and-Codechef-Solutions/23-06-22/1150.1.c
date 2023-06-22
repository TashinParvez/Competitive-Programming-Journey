#include<stdio.h>
int main()
{

    int x,z,sum=0,count=0;
    scanf("%d",&x);

    while(1)
    {
        scanf("%d",&z);
        if(z>x)
            break;
    }

    for(int i=x; i<100; i++){

        sum=sum+i;
        count=count+1;
        if(sum>=z)
            break;
    }
printf("%d\n",count);

    return 0;
}
