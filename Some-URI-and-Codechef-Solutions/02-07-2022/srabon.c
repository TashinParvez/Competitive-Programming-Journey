#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int rot = pow(b,2) - (4*a*c);

    printf("\n%d\n",rot);

    int x =(- b + sqrt(rot))/(2*a);

    int y =(- b - sqrt(rot))/(2*a);

    printf("\n%d,%d\n",x,y);

    return 0;
}

