#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);

    int i=0;
    while(str1[i]!='\0')
        i++;


    int j=0;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }


    puts(str1);

    main();
    return 0;
}


//  another approach
//  strcat(str1,str2);
//  puts(str1);


