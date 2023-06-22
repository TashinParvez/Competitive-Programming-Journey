#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int a,b;
    for(int j=1; j<=T; j++)
    {
        scanf("%d%d",&a,&b);
        for(int i=1; i<i+1; i++)
        {
            if(i%2==0)
            {
                a=a+2;
                if(a>=b)
                    break;
            }
            else
            {

                a=a+1;
                if(a>=b){
                    break;
                }
            }
        }

        if(a==b)
            printf("Yes\n");
        else
            printf("No\n");

    }


    return 0;
}

