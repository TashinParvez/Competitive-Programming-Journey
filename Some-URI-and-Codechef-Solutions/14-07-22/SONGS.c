#include<stdio.h>
int main()
{

    int T;
    scanf("%d",&T);
    int n,x,count=0;
    for(int i=1; i<=T; i++)
    {

        scanf("%d%d",&n,&x);  //  journey of N minutes
count=0;
        while(n>0)
        {

            n=n -(2*x);
            if(n>=x)
                count=count+1;
            n=n-x;
        }
printf("%d\n",count);


    }



    return 0;
}

