#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int f;
        scanf("%d",&f);
        if(f>98)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
