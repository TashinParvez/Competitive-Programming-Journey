// string02

#include<stdio.h>
int main()
{
    char str[100],str2[100];
    gets(str);
    gets(str2);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    int k=0;

    str[i]=' ';
    i++;
    while(str2[k]!='\0')
    {
        str[i]=str2[k];
        k++;
        i++;
    }
    puts(str);

    return 0;
}

