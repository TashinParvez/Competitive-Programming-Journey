#include<stdio.h>
int main()
{
    int N,k=1,j;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        for(j=k; j<=k+2; j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
        k=k+2;
    }
    return 0;
}
