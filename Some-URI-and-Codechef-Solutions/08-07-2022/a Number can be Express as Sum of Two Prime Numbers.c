#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int p1,p2;

    for(int i=2;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j!=0){
                p1=i;
            }
        }
            printf("%d\n",i);
    }


    return 0;
}
