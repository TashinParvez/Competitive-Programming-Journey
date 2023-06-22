#include <stdio.h>
int main(){
    int number,i;
    printf("enter the Number\n");
    scanf("%d",&number);
    for( i=1; i<11; i++){
        printf("%d x %d=%d\n",number,i, number*i);
    }
    return 0;
}