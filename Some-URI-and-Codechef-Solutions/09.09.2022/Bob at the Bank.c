#include<stdio.h>
int main()
{
   int t;
    scanf("%d",&t);
    for(int i=1; i<t; i++)
    {
        int w,x,y,z;
        scanf("%d %d %d %d", &w,&x,&y,&z);

        int m= w+(x*z)-(y*z);

        printf("%d\n",m);
    }


    return 0;
}

