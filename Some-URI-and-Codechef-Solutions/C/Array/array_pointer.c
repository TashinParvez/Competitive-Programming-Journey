#include<stdio.h>
int main(){

    int num[4] = {1,2,3,4};

    // int *ptr = num;       ========>         it also workes
    
    int *ptr = &num;


    *ptr=10;

    *ptr++;
    *ptr=20;

    *ptr++;
    *ptr=30;

    *ptr++;
    *ptr=40;


    printf("%d\n",num[0]);
    printf("%d\n",num[1]);
    printf("%d\n",num[2]);
    printf("%d\n",num[3]);
    return 0;
}