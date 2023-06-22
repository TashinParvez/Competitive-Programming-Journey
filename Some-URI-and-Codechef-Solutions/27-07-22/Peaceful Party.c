#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(b>=a+c)
            printf("%d\n",b);
         else
                printf("%d\n",a+c);

    }





    return 0;
}
