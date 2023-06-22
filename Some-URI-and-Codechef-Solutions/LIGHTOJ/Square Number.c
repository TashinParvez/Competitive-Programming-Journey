
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,m;

    double d;
    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n); // 5 digit
        d = sqrt(n);
        m = (int)d;

        if(d==m)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}

