#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        a=a-b;

        if(a>=b)
            printf("%d\n",b);
        else
            printf("%d\n",a);


    }
    return 0;
}

