#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
int total=1;
    for(int i=1;i<=x;i++){
        total=total*i;
    }
printf("%d\n",total);
    return 0;
}

