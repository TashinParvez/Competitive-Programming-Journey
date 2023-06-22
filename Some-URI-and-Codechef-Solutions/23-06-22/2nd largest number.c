#include<stdio.h>
int main()
{
    int a,b,c;
    int n;

    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a>b && a>c)
        {
            if(c>b)
            {
                printf("%d\n",c);
            }
            else
            {
                printf("%d\n",b);
            }

        }
        else if(b>a && b>c)
        {
            if(a>c)
            {
                printf("%d\n",a);
            }
            else
            {
                printf("%d\n",c);
            }
        }
        else
        {

            if(a>b)
            {
                printf("%d\n",a);
            }
            else
            {
                printf("%d\n",b);
            }
        }

    }
    return 0;
}
