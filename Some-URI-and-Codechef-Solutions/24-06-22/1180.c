#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
int x[N];
for(int i=0;i<N;i++)
{
    scanf("%d",&x[i]);
}
int postion=0;
int higg=99999;

for(int i=0;i<N;i++){
    if(higg>x[i])
    {
        higg=x[i];
        postion=i;
    }
}

printf("Menor valor: %d\n",higg);
printf("Posicao: %d\n",postion);


return 0;
}
