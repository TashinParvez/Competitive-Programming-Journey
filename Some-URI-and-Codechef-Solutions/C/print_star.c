#include<stdio.h>

int main(){
    int n, p=1;
    printf("Enter the value of n ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i==p){
            for(int s=1;s<=i;s++){
            printf("*");
            }
            printf("\n");
            // p+=2;
            p=p+2;
        }
    }
    return 0;
}