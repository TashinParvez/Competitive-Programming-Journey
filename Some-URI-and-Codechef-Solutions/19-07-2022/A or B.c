#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,nn,pointA,pointB,a,b;
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&nn);

        pointA=500-((n)*2);
        pointB=1000-((nn+n)*4);

        a=pointA+pointB;

        pointB=1000-((nn)*4);
        pointA=500-((n+nn)*2);

        b=pointA+pointB;

        if(a>b)
        {

            printf("%d\n",a);
        }
        else
        {
            printf("%d\n",b);

        }




        //  printf("%d\n",pointA);
        //  printf("%d\n",pointB);
        //  printf("%d\n",pointA+pointB);

    }
    return 0;
}




