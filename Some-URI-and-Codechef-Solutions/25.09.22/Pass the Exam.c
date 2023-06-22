#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>=10 && b>=10 && c>=10)
        {
            if(a+b+c>=100)
                printf("PASS\n");
            else
                printf("FAIL\n");
        }
        else
            printf("FAIL\n");
    }
    return 0;
}

