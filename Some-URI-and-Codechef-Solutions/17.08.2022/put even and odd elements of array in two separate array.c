#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int postitiveNum[100], negativeNum[100];
    int posNum=0,negNum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
        {
            posNum++;
            postitiveNum[posNum-1]=arr[i];

        }
        else
        {
            negNum++;
            negativeNum[negNum-1]=arr[i];
        }
    }

    printf("Even numbers : ");
    for(int i=0; i<posNum; i++)
    {
        printf("%d ",postitiveNum[i]);
    }
    printf("\nOdd numbers : ");
    for(int i=0; i<negNum; i++)
    {
        printf("%d ",negativeNum[i]);
    }


    return 0;
}
