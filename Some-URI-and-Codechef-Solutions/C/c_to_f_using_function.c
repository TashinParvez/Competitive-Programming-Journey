#include<stdio.h>
float c2f(float);
int main(){
    float f ;
    float c;
    printf("Enter the value of c ");
    scanf("%f",&c);
    printf("c to f is %f",c2f(c));
    return 0;
}
float c2f(float c){
    float f =((9*c)/5)+32;
    return f;
}