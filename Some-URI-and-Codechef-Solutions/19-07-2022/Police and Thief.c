#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,m;
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&m);
if(n>m|| n==m)
        printf("%d\n",n-m);
        else
        printf("%d\n",m-n);




    }
    return 0;
}



