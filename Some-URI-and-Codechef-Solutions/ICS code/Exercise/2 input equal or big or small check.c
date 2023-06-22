#include<stdio.h>
int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);

    if(X>Y){
        printf("%d is grater than %d",X,Y);
    }
    else if(Y>X){
        printf("%d is less than %d",X,Y);
    }
    else if(X==Y){
        printf("%d is equal to %d",Y,X);
    }
return 0;
}
