#include<stdio.h>

typedef struct tableInfo
{
    int width;
    int height;
    int price;
} tableInfo;

void takeTableInfo(int n,tableInfo table[n])
{
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&table[i].width,&table[i].height,&table[i].price);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,b; // n total available tables
        // b total money he has
        scanf("%d%d",&n,&b);
        tableInfo table[n];

        takeTableInfo(n,table);







    }


    return 0;
}

