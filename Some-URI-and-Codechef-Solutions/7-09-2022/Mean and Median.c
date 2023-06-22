#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int a,b,c;
        b=y; // middle
        int total=x*3;
        total-=b; // left = a+c

        c= b+1;
        a= total-c;
        if(a>c)
        {
            a = b-1;
            c = total-a;
        }


        printf("%d %d %d\n",a,b,c);
    }


    return 0;
}

