#include<stdio.h>
int findElement(int *p,int n,int f)
{
    for(int i=0; i<n; i++)
    {
        if(*p==f)
        {
            printf("The number %d is found at %d position of the array\n",f,i);
            return 0;
        }
        else
        {
            p=p+1;
        }
    }
    printf("The number %d is not found on the array\n",f);
}

int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to find: ");
    int f;
    scanf("%d",&f);

    //int *p=&arr[0];

    findElement(&arr[0],n,f);


    return 0;
}

