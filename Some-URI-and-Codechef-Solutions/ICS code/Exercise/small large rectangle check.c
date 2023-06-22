#include<stdio.h>
int main(){
  int len , wid, area;
  printf("Enter the length value ");
    scanf("%d",&len);
    printf("Enter the Width value ");
    scanf("%d",&wid);

    area = len*wid;
    if (area<=10){
        printf("This is a small rectangle\n");
    }
    else if (area<=20){
        printf("This is a medium rectangle\n");
    }
    else{
        printf("This is a large rectangle\n");
    }


return 0;}
