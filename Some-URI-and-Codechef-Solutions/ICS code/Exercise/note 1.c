#include<stdio.h>

int main()
{
    int a1,a5,a10,a50,a100,a500,money,money2;
    scanf("%d",&money);


    a500 = money/500;
    money2 = money%500;
    a100 = money2/100;
    money2 = money2%100;
    a50 = money2/50;
    money2 = money2%50;
    a10 = money2/10;
    money2 = money2%10;
    a5 = money2/5;
    money2 = money2%5;
    a1 = money2/1;

    printf("%d note(s) of 500\n
           %d note(s) of 100\n
           %d note(s) of 50\n
           %d note(s) of 10\n
           %d note(s) of 5\n
           %d note(s) of 1\n", a500, a100, a50, a10, a5, a1);

}
getch();
