#include<stdio.h>
int main()
{

    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);

    int sum = a+b;

    if(sum<=x)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

