#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x,y,n,r;

    // x normal
    // y premium
    // n burger have to buy else -1 print

    // r money


    int leftMoney,buy,nBurger,yBurger;
    for(int i =1; i<=t; i++)
    {
        leftMoney=0,buy=0,nBurger=0,yBurger=0;

        scanf("%d%d%d%d",&x,&y,&n,&r);

        //   nBurger=r/x;
        //   yBurger=(r%x)/y;
        //  buy = nBurger + yBurger;


        int nn=n;
        int kenalagbe=n;
        int buyedY=0,buyedX=0;

        printf("%d\n",nn);


        // start of main code


        int xBurger=0;

        for(int i=1; i>0; i++)
        {

            //  nn=0;

            yBurger=nn*y;  // cost of y burgers
            buyedY=nn;     // Buyed y burgers

            if(yBurger<=r)
            {
                //   r=r-yBurger;
                //  nBurger=r/n;
                //  buyedN=nn;

                n=n-nn;  // left burgers i need to buy

                xBurger= n*x;  // cost of X burgers

                buyedX=n;    // buyed x burgers

                if((yBurger+xBurger) <= r  && (buyedX+buyedY) == kenalagbe)
                {
                    printf("Yes\n");
                    printf("normal burger= %d\nPremium Burger = %d\n",buyedX,buyedY);
                    break;
                }
                else
                {
                    printf("No\n");
                }


                /*

                  if(yBurger+nBurger==n)
                      printf("Yes\n");
                  else
                  {

                      printf("No\n");
                      break;
                  }

                */

            }

            nn=nn-1;



        }






        /*    if(yBurger>=n)
            {
                printf("%d %d\n",nBurger,yBurger);
            }
            else
            {
                yBurger=r/y;
                nBurger=(r%y)/x;
                buy = nBurger + yBurger;

                if(buy>=n)
                {
                    printf("%d %d\n",nBurger,yBurger);
                }
                else
                {
                    printf("-1\n");
                }
            }

            */

    }

    return 0;
}

