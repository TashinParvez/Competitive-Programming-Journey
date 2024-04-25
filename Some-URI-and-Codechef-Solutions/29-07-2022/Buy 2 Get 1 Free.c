#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n,x;

    for(int i =1;i<=t;i++){
        scanf("%d%d",&n,&x);
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0)
                sum+=0;
            else
                sum+=x;
        }
        printf("%d\n",sum);
    }





return 0;
}

