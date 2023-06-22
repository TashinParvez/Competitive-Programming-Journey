#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    int a,b;
    for(int i = 1;i<=t;i++){
        scanf("%d%d",&a,&b);

        if(a>=b)
        printf("%d\n",7-a);
        else
        printf("%d\n",7-b);


    }





return 0;
}

