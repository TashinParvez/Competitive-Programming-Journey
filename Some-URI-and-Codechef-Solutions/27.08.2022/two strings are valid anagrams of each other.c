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
    {
        int j=0;
        while(str2[j]!='\0')
        {
            if(str1[i]==str2[j])
            {
                str2[j]='*';
                break;
            }
            j++;
        }
        i++;
    }



    i=0;
    int flag=0;
    while(str2[i]!='\0')
    {
        if(str2[i]!='*')
        {
            flag=1;
            break;
        }
        i++;
    }

    if(flag==1)
        printf("two strings are not anagrams.\n");
    else
        printf("two strings are anagrams.\n");


    main();
    return 0;
}


