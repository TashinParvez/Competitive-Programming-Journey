#include<stdio.h>
int main (){
char c;
double a,b,d;
scanf("%c",&c);
scanf("%lf",&a);
scanf("%lf",&b);
d=a+(b*(15/100));
printf("TOTAL = R$ %.2lf\n",d);
return 0;
}
