#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);

        if(a>=7)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}

