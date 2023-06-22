#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int m;
    scanf("%d",&m);

    int b[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }

    int count = 0;




    for(int i=0; i<n; i++)
    {
        count = 0;
        for(int j=0; j<m; j++)
        {
            if(a[i] == b[j])
                count =count+ 1;
        }
        if(count==0)
            printf("%d ",a[i]);
    }



    for(int j=0; j<m; j++)
    {
        count = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]== b[j])
                count = 1;
        }
        if(count==0)
            printf("%d ",a[j]);
    }





    return 0;
}

