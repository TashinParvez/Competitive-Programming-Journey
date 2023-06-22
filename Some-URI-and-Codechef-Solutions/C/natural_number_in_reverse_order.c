#include<stdio.h>
int main(){
    int n,i;
    printf("enter the last natural number\n");
    scanf("%d",&n);
    for(n=n; n>0; n--){
        printf("%d\n", n);
    }
    return 0;
}