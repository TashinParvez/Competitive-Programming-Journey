#include<stdio.h>
int main()
{
    printf("Enter array size : ");
    int n;
    scanf("%d",&n);

    char arr[n];
    int count =0;
    for(int i=0; i<n; i++)
    {
        scanf("%c",&arr[i]);
        if(arr[i]=='A' || arr[i]=='E' ||arr[i]=='I' ||arr[i]=='O' ||arr[i]=='U')
            count+=1;
    }

    printf("Count = %d\n",count);

    return 0;
}
