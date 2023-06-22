#include<stdio.h>
int main(){
    int a,b,c,d,result;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    printf("Enter the value of d \n");
    scanf("%d", &d);
    result= (a*b)+(a-c)/(d+b);
    printf("result is = %d",result);
    return 0;
}
