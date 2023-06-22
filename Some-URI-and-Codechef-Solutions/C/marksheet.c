#include<stdio.h>
int main(){
    int math, chemistry, physics;
    float total;
    printf("Enter your math marks\n");
    scanf("%d",&math);
    printf("Enter your physics marks\n");
    scanf("%d", &physics);
    printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);

    total= (math + chemistry + physics)/3;

    if(total<40){
        printf("You are failed");
    }
    else{
        if(math<33 || chemistry<33 || physics<33 ){
            printf("You are failed");
        }
        else{
         printf("You are passed");
        }
    }
    return 0;
}