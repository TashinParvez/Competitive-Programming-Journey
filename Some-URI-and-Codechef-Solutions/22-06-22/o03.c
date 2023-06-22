#include<stdio.h>
int main()
{

    float a,b;
    scanf("%f%f",&a,&b);

    float x;
    x= (3.31 * a*a + 2.01 * b*b*b) / (7.16 * b*b + 2.01 * a*a*a);


       printf("x=%f",x);


    return 0;
}
