#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,digit=0;

    for(int i =1; i<=t; i++)
    {
        scanf("%d",&n);
        int nn=n,m=n;
        digit=0;
        while(1)
        {
            digit+=1;
            nn=nn/10;
            if(nn<10)
            {
              digit+=1;
                break;
            }
        }
      //  printf("%d\n",digit);

      digit=digit-1;
      while(1)
        {

            mm=nn/10;
            mm=nn/10;
            sum=sum+m*pow(10,digit)

            if(nn<10)
            {
              digit+=1;
                break;
            }
            digit=digit-1;
        }




    }

    return 0;
}
