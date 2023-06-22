#include<stdio.h>
int main()
{
    int arr[4],count=0;
    for(int i=0;i<4;i++){

    scanf("%d",&arr[i]);
    if(arr[i]>=10)
        count+=1;
    }



    printf("%d\n",count);

    return 0;
}
