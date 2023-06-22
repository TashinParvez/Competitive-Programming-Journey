#include<stdio.h>
int main(){
    int i, a,sum = 1;
    printf("enter the number ");
    scanf("%d", &a);
    for(i=a; i>0; i--){
        sum=sum*i;
    }
    printf("%d!=%d",a,sum);
    return 0;
}