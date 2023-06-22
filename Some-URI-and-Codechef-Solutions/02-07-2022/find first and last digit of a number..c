#include<stdio.h>
int main()
{
    int a,count=0,last,first;
    scanf("%d",&a);

    for(int i=1; i<i+1; i++)
    {
        if(i==1)
        {
            int b= a/10;
            b=a-(b*10);
            last=b;
        }

        a = a/10;

        if(a>=0 && a<=9 ){
            first =a;
            break;
        }

    }

      printf("First = %d\n",first);
      printf("Last = %d\n",last);

    return 0;
}

