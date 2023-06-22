#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("Global=%d\n",a);

    for(int i=0; i<1; i++)
    {
        scanf("%d",&a);
        printf("Local=%d\n",a);
    }

    printf("Global=%d\n",a);
    return 0;
}
