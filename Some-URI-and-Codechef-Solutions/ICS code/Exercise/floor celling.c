#include<stdio.h>
#include<math.h>
int main(){
    float a;
    int flr,c;
    scanf("%f",&a);
    flr= floor(a);
    c= ceil(a);
    printf("floor=%d\nCeil=%d",flr,c);
return 0;
}
