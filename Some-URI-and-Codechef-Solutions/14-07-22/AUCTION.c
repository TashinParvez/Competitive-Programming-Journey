#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int a,b,c;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a>b && a>c)
        {
            printf("Alice\n");
        }
        else if(b>a && b>c)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Charlie\n");
        }


    }

    return 0;
}

