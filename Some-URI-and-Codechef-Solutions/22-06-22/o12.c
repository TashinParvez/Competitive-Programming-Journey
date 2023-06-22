#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int p = b*b-4*a*c;
    if(p>=0)
    {
        float x = (-b + sqrt(p))/(2*a);
        float y = (-b - sqrt(p))/(2*a);
        printf("%.2f %.2f",x,y);
    }
    else if(p<0)
    {
        printf("Imaginary\n");
    }




    return 0;
}

