#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,m,o;
        scanf("%d%d%d",&n,&m,&o);

        // shorting
        {
            int temp;
            if(m>=n)
            {
                if(m>=o)  // m is higg
                {
                    if(o>=n) //  o is 2nd higg
                    {
                        temp=o;
                        o=n;
                        n=temp;
                    }
                    // else  n is 2nd higg
                }
                else //o  is higg
                {

                    temp = o;
                    o = m;
                    m = temp; // m became higg

                    if(o>=n) //  o is 2nd higg
                    {
                        temp=o;
                        o=n;
                        n=temp;
                    }
                    // else  n is 2nd higg
                }
            }

            else if(n>=m)
            {
                temp=m;
                m=n;
                n=temp; // m became higg

                if(n>=o) // n is higg
                {

                }
                else // o is 2nd higg
                {
                    temp=o;
                    o=n;
                    n=temp;
                }

            }


        }

        // end

        // -------- m n o

        int count=0;


//---- double
        {
            if(m>1 && n>1)
            {
                count++;
                n--;
                m--;
            }

            if(n>1 && o>1)
            {
                count++;
                n--;
                o--;
            }

            if(m>1 && o>1)
            {
                count++;
                o--;
                m--;
            }
        }

        // -- single
        {
            if(m!=0)
            {
                count++;
                m--;
            }

            if(n!=0)
            {
                count++;
                n--;
            }

            if(o!=0)
            {
                count++;
                o--;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
