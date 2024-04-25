#include <stdio.h>

int main() {
    // Write C code here
    int i;
    scanf("%d", &i);
    while(i!=0)
    {
        int n, r=0, d=0, sum=0;
        sum=0,d=0,r=0;
        scanf("%d", &n);
        d=n/100;
        r=n%100;
        sum=d+r;
        if(sum<=10)
        {
            printf("%d", sum);
        }
        else
        {
            printf("-1");
        }
        i--;
    }
    return 0;
}
