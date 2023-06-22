#include<stdio.h>
int main(){
    int number, i;
    printf("Enter the number\n");
    scanf("%d",&number);
    for ( i=10; i>0; i--){
        printf("%d x %d = %d\n",number,i,number*i);
    }
    return 0;
}