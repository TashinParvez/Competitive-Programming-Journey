#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int nn;
    scanf("%d",&nn);

    int index[sizeof(arr)];
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==nn)
        {
            index[count]=i;
            count+=1;
        }
    }
      printf("Found at the index no : ");
    for(int i=0; i<'\0'; i++)
    {
      printf("%d,",index[i]);
    }


    return 0;
}

