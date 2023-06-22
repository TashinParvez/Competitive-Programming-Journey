#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    int i=1;
    int printRows=0,inlineOutput=0;
    while(printRows!=rows)
    {
        printRows+=1;
        for(i; i<i+1;)
        {
            printf("%d ",i);
            i++;
            inlineOutput+=1;
            if(printRows==inlineOutput)
            {
                printf("\n");
                inlineOutput=0;
                break;
            }
        }
    }
    return 0;
}

