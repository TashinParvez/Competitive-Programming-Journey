#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int minA,minB,minC,a,b,c,minT;

    for(int i =1; i<=t; i++)
    {
        scanf("%d%d%d%d%d%d%d",&minA,&minB,&minC,&minT,&a,&b,&c);

        if(a+b+c>=minT)
        {

            if(a>=minA && b>=minB && c>=minC)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }





    return 0;
}
