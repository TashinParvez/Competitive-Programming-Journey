#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);

        int bag = n/10;
        if(n%10==0)
            printf("%d\n",bag);
        else{
            printf("%d\n",bag+1);
        }
    }

    return 0;
}

