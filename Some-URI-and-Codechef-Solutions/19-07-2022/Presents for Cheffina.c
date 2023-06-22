#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    int cost=0;
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);

    int r1,r2,res;

      r1=n/5;
      r2=n%5;
      res=4*r1+r2;
      printf("%d\n",res);



    }
    return 0;
}




