#include<stdio.h>
int main()
{

    while(1)
    {
        int number;
        scanf("%d",&number);
        if(number<0)
        {
            continue;
        }
        printf("%d\n",number);
    }

    return 0;
}
