#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);

    int length=strlen(str);
    length--;
    int i=0;

    while(i<=length-i)
    {
        char temp= str[length-i];
        str[length-i]=str[i];
        str[i]=temp;
        i++;
    }


    puts(str);


    main();
    return 0;
}

