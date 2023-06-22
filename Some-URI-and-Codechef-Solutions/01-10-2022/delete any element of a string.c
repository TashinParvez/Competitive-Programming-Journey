#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    fflush(stdin);

    int n;
    scanf("%d",&n);

    for(int i=n; str[i]!='\0'; i++)
    {
        str[i]=str[i+1];
        if(str[i+1+1]=='\0')
        {
            str[i+1]='\0';
            break;
        }
    }

    puts(str);
    return 0;
}


