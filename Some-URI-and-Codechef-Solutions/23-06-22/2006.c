#include<stdio.h>
int main(){
int x,a,ans;
scanf("%d",&x);

for(int i=1;i<=5;i++){
scanf("%d",&a);
if(x==a)
    ans=ans+1;

}

printf("%d\n",ans);

return 0;
}

