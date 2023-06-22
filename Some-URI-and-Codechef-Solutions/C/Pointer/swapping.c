#include<stdio.h>
int main(){
    int x=10, y=20, temp;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    printf("value of x is %d\n", x);
    printf("value of y is %d\n", y);

    // swapping

    *ptr1 = *ptr2;
    *ptr2 = temp;
    temp = *ptr1;

    printf("value of x is %d\n", x);
    printf("value of y is %d\n", y);
    
    return 0;
}