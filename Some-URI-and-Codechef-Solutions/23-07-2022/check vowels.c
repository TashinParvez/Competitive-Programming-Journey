#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    char arr[n];
    int count=0;
    fflush(stdin);
    for(int i=0; i<n; i++)
    {
        scanf("%c",&arr[i]);
        if(arr[i]=='a' || arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
            count+=1;
        if(arr[i]=='A' || arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
            count+=1;
    }

    printf("Count = %d",count);


    return 0;
}

