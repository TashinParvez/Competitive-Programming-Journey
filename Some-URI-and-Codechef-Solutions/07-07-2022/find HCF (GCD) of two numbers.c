#include<stdio.h>
int main()
{
    int n,o;
    scanf("%d%d",&n,&o);
    int count=0;
    for(int i=n; i>=1; i--)
    {
        if(count>0){
            break;
        }
        if(n%i==0)
        {
            if(o%i==0)
            {
                count+=1;
                printf("%d ",i);
            }
        }
    }



    return 0;
}

