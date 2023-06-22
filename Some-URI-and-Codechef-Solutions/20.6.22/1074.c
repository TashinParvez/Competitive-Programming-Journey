#include<stdio.h>
int main(){

int N,a;
scanf("%d",&N);

for(int i=1;i<=N;i++){
scanf("%d",&a);
    if(a==0)
        printf("NULL\n");
    else if(a>0){
        if(a%2==0){
            printf("EVEN POSITIVE\n");
        }
        else{
            printf("ODD POSITIVE\n");
        }
    }
    else if(a<0){
        if(a%2==0){
            printf("EVEN NEGATIVE\n");
        }
        else{
            printf("ODD NEGATIVE\n");
        }
    }

}



return 0;
}
