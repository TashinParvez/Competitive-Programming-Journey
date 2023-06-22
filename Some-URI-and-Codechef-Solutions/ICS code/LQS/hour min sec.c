#include<stdio.h>
int main(){
int sec;
scanf("%d",&sec);
printf("%d hour %d min %d sec", sec/3600, (sec%3600)/60,(sec%3600)%60 );
return 0;
}
