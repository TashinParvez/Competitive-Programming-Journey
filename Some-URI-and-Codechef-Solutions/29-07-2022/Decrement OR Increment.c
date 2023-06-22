#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t%4==0)
        printf("%d\n",t+1);
    else
        printf("%d\n",t-1);

    return 0;
}
