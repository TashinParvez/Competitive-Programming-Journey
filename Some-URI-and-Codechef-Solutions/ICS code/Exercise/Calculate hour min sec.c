#include<stdio.h>
int main()
{
    int time,sec,min,min2,hour;
    printf("Enter your time:");
    scanf("%d",&time);

    min=time/60;
    sec=time%60; //sec
    min2=min%60; //min
    hour=min/60; //hour

    printf("%dhour %dmin %dsec",hour,min2,sec);

}
