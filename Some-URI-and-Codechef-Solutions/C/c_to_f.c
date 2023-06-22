#include <stdio.h>
int main(){
    float c , f;
    printf("Enter the value of the temperature in celcious \n");
    scanf("%f", &c);
    printf("Temperature in faenheight %f", f = ((9 * c)/5)+32 );
    return 0;
}