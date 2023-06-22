#include<stdio.h>
int main()
{

    float c;
    printf("length in centimeter: ");
    scanf("%f",&c);

    printf("\nlength in M: %.2f\n",c/100);
    printf("length in KM: %.2f\n\n",c/100000);


    return 0;
}
