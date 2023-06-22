#include<stdio.h>
int main()
{

    int x,k=0;
    scanf("%d",&x);

    for(int i=x; i<i+1; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            k=k+1;
            if(k==6)
                break;
        }
    }

    return 0;
}
