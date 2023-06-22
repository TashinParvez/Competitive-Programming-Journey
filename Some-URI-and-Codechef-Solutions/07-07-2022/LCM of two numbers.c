#include<stdio.h>
int main()
{
    int n,o;
    scanf("%d%d",&n,&o);

    int higg,low;
    if(n>o)
    {
        higg=n;
        low=o;
    }
    else
    {
        higg=o;
        low=n;
    }


    int count=0;

    int che=1;

    int match=1;
    for(int i=1; i<i+1; i++)   // higg= 30  // low = 12
    {
        che=1;
        match=1;

        che = higg * i;
        for(int j=1; j<j+1; j++)
        {
            match=1;
            match=low*j;
            if(match == che)
            {
                printf("%d",match);
                count=count+1;
                break;
            }
            else if(match>che)
            {
                continue;
            }
        }
        if(count>0)
        {
            break;
        }

    }

    return 0;
}


