#include<stdio.h>
int main()
{
    int r,star;
    scanf("%d",&r);
    int space=0, last=1;
    for(int i=1;i<=r;i++){
        if(i=(r/2)+1){
            for( int j=1; j<=r; j++){
                printf("*");
                break;
            }
        }


    if(i<(r/2+1)){
        for(int j=1;j<=r/2+1-i;j++){
            printf(" ");

        }
    }
    if(i==1 ||i==r)
        printf("*");
    else{
        star=3;
    }

    if(i>2 && i<r/2+1){
        space+=1;
    }
    for(int j=1;j<=star;j++){
        printf("*");
        for(int k=1; k<=space;k++){
            printf(" ");
        }
    }
    if(i>r/2+1){
        for(int j=1;j<=last;i++){
            printf(" ");

        }
        last+=1;

        for(int j=1;j<=star;j++){
            printf("*");
            for(int k=1;k<=space;k++){
                printf(" ");
            }
        }
    }
    }


    return 0;
}
