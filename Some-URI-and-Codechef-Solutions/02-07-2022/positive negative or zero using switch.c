#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    switch(a>=0)
    {
    case 0:
        printf("%d is Negative\n",a);
        break;
    case 1:

        switch(a>0)
        {
        case 1:
            printf("%d is positive\n",a);
            break;
        case 0:
            printf("%d is Zero\n",a);
            break;
        }
    }

    return 0;
}

