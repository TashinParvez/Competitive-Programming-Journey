#include<stdio.h>
int main(){
    int i, sum = 0,value = 1, a;
    printf("enter the multiplication table no ");
    scanf("%d",&a);

    for(i=1; i<=10; i++){
        value= a*i;
        sum=sum+value;
    }
    printf("Total=%d",sum);
    return 0;
}