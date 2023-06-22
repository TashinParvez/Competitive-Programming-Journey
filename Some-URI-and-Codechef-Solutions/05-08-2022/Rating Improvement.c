//Rating Improvement
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int n,nn;
        scanf("%d%d",&n,&nn);
        if(nn>=n && nn<=n+200)
            printf("Yes\n");
        else{
        printf("No\n");

        }



    }

    return 0;
}

