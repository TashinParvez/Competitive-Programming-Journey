#include<stdio.h>
int main(){
for(int i=1;i<=10;i++){
    if(i%2==0){
        printf("%d ",i-1);
    }
    else{
        printf("%d ",i+1);
    }
}
return 0;
}
