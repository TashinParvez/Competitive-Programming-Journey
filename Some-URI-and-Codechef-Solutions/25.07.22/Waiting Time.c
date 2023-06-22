#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    int k,x;
    for(int i =1;i<=t;i++){
        scanf("%d%d",&k,&x);

        k=k*7;
        x=k-x;

        printf("%d\n",x);
    }





return 0;
}

