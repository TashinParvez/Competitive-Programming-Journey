#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int n,k;
    for(int i=1; i<=T; i++)
    {


        scanf("%d%d",&n,&k);

        printf("%d\n",n-k);
    }
    return 0;
}

