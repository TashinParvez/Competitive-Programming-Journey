#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        if(a==b)
            printf("yes\n");
        else if(a%c==0 && b%c==0)
            printf("yes\n");
        else
            printf("No\n");

    }
    return 0;
}

