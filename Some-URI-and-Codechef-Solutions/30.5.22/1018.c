#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
int extra;
int a100=N/100;
extra=N%100;
int a50=extra/50;
extra=extra%50;
int a20=extra/20;
extra=extra%20;
int a10=extra/10;
extra=extra%10;
int a5=extra/5;
extra=extra%5;
int a2=extra/2;
extra=extra%2;
int a1=extra/1;

printf("%d\n",N);
printf("%d nota(s) de R$ 100,00\n",a100);
printf("%d nota(s) de R$ 50,00\n",a50);
printf("%d nota(s) de R$ 20,00\n",a20);
printf("%d nota(s) de R$ 10,00\n",a10);
printf("%d nota(s) de R$ 5,00\n",a5);
printf("%d nota(s) de R$ 2,00\n",a2);
printf("%d nota(s) de R$ 1,00\n",a1);


return 0;
}
