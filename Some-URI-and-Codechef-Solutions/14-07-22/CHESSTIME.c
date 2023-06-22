#include<stdio.h>
int main()
{

    int T,n,nn;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&n);
        nn=(n*60)/20;
        printf("%d\n",nn);

    }

    return 0;
}

