#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float r,y,a,b;
    scanf("%d",&x);

    r=x*(3.1416/180);
    y=sin(x);
    a= cos(x);
    b=tan(x);

    printf("radian value %f\n",r);
    printf("sine value %f\n",y);
    printf("cosine value %f\n",a);
    printf("tan value %f\n",b);
}
