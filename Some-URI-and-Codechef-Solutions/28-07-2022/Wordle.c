#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n=5;
    char h[n],g[n],o[n];

    for(int i =1;i<=t;i++){
        scanf("%s",&h);
        scanf("%s",&g);
for(int i=0;i<n;i++)
{
    if(h[i]==g[i])
        o[i]='G';
    else
        o[i]='B';
}

        printf("%s\n",o);
    }





return 0;
}

