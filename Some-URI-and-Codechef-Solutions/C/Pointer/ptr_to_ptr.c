#include<stdio.h>
int main(){
    int i=5;
    int *ptr1=&i;
    int **ptr2 = &ptr1;

    printf("Valuue of i is %d\n", i);
    printf("Valuue of i is %d\n", *ptr1);
    printf("Valuue of i is %d\n", *(*ptr2));
    return 0;
}