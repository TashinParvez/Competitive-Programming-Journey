#include <stdio.h>
int sum(int, int);
int main(){
    int a=3, b=3;

    printf("%d", sum(a, b));
    return 0;
}
int sum(int a, int b){
    
    return a+b;
}