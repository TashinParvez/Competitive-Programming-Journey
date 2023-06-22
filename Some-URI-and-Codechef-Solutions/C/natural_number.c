#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the last natural number\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d \n",i);
    }
    return 0;
}