#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);

        if(x-1 < 100-x)
            printf("LEFT\n");
        else
            printf("RIGHT\n");
    }
    return 0;
}


