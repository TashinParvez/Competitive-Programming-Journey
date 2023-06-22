#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    for(int i=0; i<=a; i++ )
    {
        int c,d,ans=0;
        scanf("%d %d",&c,&d);
        if(c<d)
        {
            for( int k=c+1 ; k<d; k++)
            {
                if(k%2!=0)
                {
                    ans=ans+k;
                }

            }
            printf("%d\n",ans);

        }
        else
        {
            for( int k=d+1 ; k<c; k++)
            {
                if(k%2!=0)
                {
                    ans=ans+k;
                }
            }
            printf("%d\n",ans);


        }
    }

    return 0;
}
