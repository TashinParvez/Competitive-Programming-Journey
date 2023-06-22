#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=1;
    for(int i=0; i<n; i++)
    {
        t= t*(n-i);
        if(n-1==i)
        {
            printf("%d",n-i);
            printf("= %d",t);
        }
        else
        {
            printf("%d*",n-i);
        }
    }
    return 0;
}
