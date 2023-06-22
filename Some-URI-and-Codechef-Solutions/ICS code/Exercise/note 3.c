#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    if(money/500>0)
    {
        printf("%d notes of 500\n",money/500);
    }
    if((money%500)/100>0)
    {
        printf("%d note of 100\n",(money%500)/100);
    }
    if(((money%500)%100)/50>0)
    {
        printf("%d note of 50\n",((money%500)%100)/50);
    }
    if((((money%500)%100)%50)/20>0)
    {
        printf("%d note of 20\n",(((money%500)%100)%50)/20);
    }
    if(((((money%500)%100)%50)%20)/10>0)
    {
        printf("%d note of 10\n",((((money%500)%100)%50)%20)/10);
    }
    if((((((money%500)%100)%50)%20)%10)/5>0)
    {
        printf("%d note of 5\n",(((((money%500)%100)%50)%20)%10)/5);
    }
    if(((((((money%500)%100)%50)%20)%10)%5)>0)
    {
        printf("%d note of 1\n",((((((money%500)%100)%50)%20)%10)%5));
    }
    return 0;
}
