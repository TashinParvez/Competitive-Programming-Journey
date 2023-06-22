#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    int pro=1,lest;

   for(int i=0; i<i+1; i++)
    {
        lest= a%10;
        pro=pro*lest;
        a=a/10;
        if(a<10)
        {
            lest=a;
            pro=pro*lest;
            break;
        }
    }

    printf("%d",pro);

    return 0;
}
