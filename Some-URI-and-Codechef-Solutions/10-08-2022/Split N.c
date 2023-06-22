#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            if(pow(2,i)==n)
            {
                printf("0\n");
                n=0;
            }

        }
        if(n!=0)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++){
                    if(pow(2,i)+pow(2,j)==n)
                        printf("1\n");
                }


            }



        }
    }

    return 0;
}

