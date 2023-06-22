
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    gets(str1);
    char c;
    scanf("%c",&c);
int flag=0;

    for(int i=0; str1[i]!='\0'; i++)
    {
        if(flag==1)
            str1[i]='*';
        if(str1[i]==c)
            {
                flag=1;
            }

    }


    for(int i=0; str1[i]!='\0'; i++)

    {
        if(str1[i]=='*')
            continue;
        else
        {
            printf("%c",str1[i]);
        }

    }


main();
    return 0;
}
