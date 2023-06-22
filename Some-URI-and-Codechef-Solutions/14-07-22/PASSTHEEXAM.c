#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int a,b,c;
    for(int i=1; i<=T; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>=100 && a>=10 && b>=10 && c>=10)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }


    return 0;
}

