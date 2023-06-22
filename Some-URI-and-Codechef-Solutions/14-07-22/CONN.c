#include<stdio.h>
int main()
{

    int T;
    scanf("%d",&T);
    int n,sum=0,count;
    for(int p=1; p<=T; p++)
    {
        scanf("%d",&n);



        for(int i=0; i<n; i++)
        {
            sum=0;
            count=0;
            sum=sum+(2*i);
            if(sum==n)
            {
                printf("Yes\n");
                count=count+1;
                break;
            }
            else
            {
                sum= n-sum;
                int j=0;
                if(i==0)
                {
                    j=1;
                }
                for(j; j<n; j++)
                {
                    if(sum%(7*j)==0)
                    {
                        printf("Yes\n");
                        count=count+1;
                        break;
                    }

                }
            }
            if(count==0 && i==n-1)
            {
                printf("No\n");
            }

        }

    }



    return 0;
}

