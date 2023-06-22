#include<stdio.h>
int main()
{
    int a ;
    scanf("%d",&a);
    int i=10;
    do
    {
        printf("%d*%d=%d\n",a,i,a*i);
        i--;
    }
    while(i>=1);

    return 0;
}
