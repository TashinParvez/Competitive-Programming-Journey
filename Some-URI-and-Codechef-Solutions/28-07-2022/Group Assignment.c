#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,x,p;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d",&n,&x);



        printf("%d\n",2*n-x+1);

    }

    return 0;
}

