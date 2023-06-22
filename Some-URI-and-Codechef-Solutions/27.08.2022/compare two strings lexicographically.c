#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);

    int i=0,flag=0;
    while(str1[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
        i++;
    }


    if(flag==1)
        printf("Not Equal\n");
    else
        printf("Not Equal\n");



main();
    return 0;
}

