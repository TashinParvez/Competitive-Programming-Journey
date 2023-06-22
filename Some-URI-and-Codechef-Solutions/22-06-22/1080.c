#include<stdio.h>
int main()
{
    int a,big,position;

    for(int i=1; i<101; i++)
    {
        scanf("%d",&a);

        if(i==1)
        {
            big=a;
            position =i;
        }
        if(a>=big)
        {
            big=a;
            position =i;
        }
    }
    printf("%d\n%d\n",big,position);

    return 0;
}
