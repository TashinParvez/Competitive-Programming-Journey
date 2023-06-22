#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        if(a<=b && a<=c)
            printf("%d\n",b+c);
        else if(b<=a && b<=c)
            printf("%d\n",a+c);
        else if(c<=b && c<=a)
            printf("%d\n",b+a);
        else
            printf("%d\n",b+a);

    }



    return 0;
}

