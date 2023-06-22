#include<stdio.h>
int main()
{
    int sH,sM,eH,eM;
    scanf("%d%d%d%d",&sH,&sM,&eH,&eM);

  //  scanf("%d%d",&eH,eM);

    int totalM,totalH;

    int hour= 24-sH;
    int min1st= (hour*60)+(60-sM);

    int min2nd=(hour*60)+eM;

    totalM=min1st+min2nd;
    totalH=totalM/60;
    totalM=totalM%60;



    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",totalH,totalM);

    return 0;
}

