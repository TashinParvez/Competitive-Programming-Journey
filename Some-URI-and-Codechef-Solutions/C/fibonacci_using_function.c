#include<stdio.h>
int fibonacci(int);
int main(){
    int f;
    printf("Enter the serial number ");
    scanf("%d",&f);
    printf("%d no fibonacci number is %d",f, fibonacci(f));
    return 0;
}
int fibonacci(int f){
    if(f == 1 || f == 2){
        return 1;
    }
    return fibonacci(f-1) + fibonacci(f-2);
}