#include<stdio.h>
int main(){
    int a =3;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}

// you must be thinking ans is      3 4 4
// but the real ans is              5 5 3     (right to left)