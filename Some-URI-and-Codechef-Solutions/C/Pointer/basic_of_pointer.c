#include<stdio.h>
int main(){
    int i = 65;
    int *j = &i;
    printf("%d\n", j);
    printf("%u\n", j);

    printf("%d\n", *j);
    printf("%u\n", *j);

    printf("%u\n", i);
    printf("%d\n", i);
    printf("%d\n", &i);

    return 0;
}