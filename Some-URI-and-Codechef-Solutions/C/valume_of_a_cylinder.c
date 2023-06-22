#include <stdio.h>
int main(){
    float pie = 3.1416;
    int r;
    float sum, h;

    printf("What is the value of the cylinder radious? \n");
    scanf("%d", & r);
    printf("What is the height of the cylinder? \n");
    scanf("%f", &h);
    printf("Volume of the cylinder is %f", sum = pie * r * r * h );
    return 0;
}