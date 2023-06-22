#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
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

