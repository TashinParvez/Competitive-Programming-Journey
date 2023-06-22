#include<stdio.h>
int main(){
int x,y,sum=0;
scanf("%d%d",&x,&y);

if(x<y){

    for(int i=x;i<=y;i++){
        if(i%13!=0){
            sum=sum+i;
        }
    }
}

else if(x>y){
 for(int i=y;i<=x;i++){
        if(i%13!=0){
            sum=sum+i;
        }
    }
}


printf("%d\n",sum);
return 0;
}

