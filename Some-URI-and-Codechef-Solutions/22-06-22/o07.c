#include<stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d%f",&a,&b);

    printf("Assignment: %f assigned to an int produces %.0f\n",b,b);
    printf("Assignment: %d assigned to a float produces %f\n",a,a+0.00);
    printf("Type Casting: (float) %d produces %f\n",a,(float)a);
    printf("Type Casting: (int) %f produces %d\n",b,(int)b);



    return 0;
}

