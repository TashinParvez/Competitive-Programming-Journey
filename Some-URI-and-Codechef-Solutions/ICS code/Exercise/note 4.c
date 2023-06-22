#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int m500=a/500;
    int money=a%500;
    int m100=money/100;
    money = money%100;
    int m50= money/50;
    money = money%50;
    int m20= money/20;
    money=money%20;
    int m10= money/10;
    money=money%10;
    int m5=money/5;
    money=money%5;
    int m2=money/2;
    money= money%2;
    int m1= money;

    if(m500>0){
        printf("%d note of 500\n",m500);
    }
    if(m100>0){
        printf("%d note of 100\n",m100);
    }
    if(m50>0){
        printf("%d note of 50\n",m50);
    }
    if(m20>0){
        printf("%d note of 20\n",m20);
    }
    if(m10>0){
        printf("%d note of 10\n",m10);
    }
    if(m5>0){
        printf("%d note of 5\n",m5);
    }
    if(m2>0){
        printf("%d note of 2\n",m2);
    }
    if(m1>0){
        printf("%d note of 1\n",m1);
    }

return 0;
}
