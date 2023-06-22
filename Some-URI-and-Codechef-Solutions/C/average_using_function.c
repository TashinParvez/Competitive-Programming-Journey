#include<stdio.h>
double avg(int, int, int);
int main(){
    
    printf("avg=%lf", avg(3,4, 1));
    return 0;
}
double avg(int a, int b, int c){
    return (a+b+c)/3.0;
}

// return (a+b+c)/3     == 2.000 (bcz  int/int=int)
// return (a+b+c)/3.0   == 2.000 (bcz  int/float=float)