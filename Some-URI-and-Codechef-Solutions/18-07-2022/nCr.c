#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);

    int powerOfN=1,powerOfR=1;

    for(int i=1;i<=n;i++){
        powerOfN=powerOfN*i;
    }
    for(int i=1;i<=r;i++){
        powerOfR=powerOfR*i;
    }

    int left= n-r,left2=1;

    for(int i=1;i<=left;i++){
        left2=left2*i;
    }

    int under = powerOfR* left2;

    printf("%d\n",powerOfN/under);


    return 0;
}

