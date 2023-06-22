#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    for(int i=n2; i>=1; i--)
    {
        if(n2%i==0 && n1%i==0)
        {
            n1=i;
            break;
        }
    }
    printf("GCD %d\n",n1);
    return 0;
}
