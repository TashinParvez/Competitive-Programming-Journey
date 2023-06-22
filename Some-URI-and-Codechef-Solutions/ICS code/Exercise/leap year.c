#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%400==0){
        printf("This year is leap year");
    }
    else if(a%100==0){
        printf("This year is not leap year");
    }
    else{
        if(a%4==0){
            printf("this year is leap year");
        }
        else{
            printf("this year is not leap year");
        }
    }
return 0;
}
