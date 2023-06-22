#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int higg=0;
    for(int i=1; i<=t; i++)
    {
        higg=0;
        // n total available tables
        // b total money he has
        int n,b;
        scanf("%d %d",&n, &b);


        int table[n][3];
        for(int j=0; j<n; j++)  //--- taking tables info inputs
        {
            scanf("%d %d %d",&table[j][0],&table[j][1],&table[j][2]);
            if(table[j][2]<=b)
            {
                table[j][0]=table[j][0]*table[j][1];
                if(table[j][0]>higg)
                    higg=table[j][0];
            }
        }


        if(higg==0)
            printf("no tablet\n");
        else
        {
            printf("%d\n",higg);
        }
    }


    return 0;
}
