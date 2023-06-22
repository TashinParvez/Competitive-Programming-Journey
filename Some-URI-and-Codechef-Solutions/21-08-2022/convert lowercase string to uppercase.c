#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>'Z')
        {
            str[i]=str[i]-('a'-'A');
        }
    }

    puts(str);
    return 0;
}
