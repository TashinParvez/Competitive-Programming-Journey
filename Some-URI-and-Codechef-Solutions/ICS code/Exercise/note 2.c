#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);

    int n5=money/500;
    int n1=(money%500)/100;
    int p5=((money%500)%100)/50;
    int p20=(((money%500)%100)%50)/20;
    int p10=((((money%500)%100)%50)%20)/10;
    int q5=(((((money%500)%100)%50)%20)%10)/5;
    int p1=((((((money%500)%100)%50)%20)%10)%5);

    printf("%d notes of 500\n%d notes of 100\n%d notes of 50\n%d notes of 20\n%d notes of 10\n%d notes of 5\n%d notes of 1",n5,n1,p5,p20,p10,q5,p1);
    return 0;
}
