#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int length=strlen(str);

    int flag=0;
    for(int i=0; i<=length/2; i++)
    {
        if(str[i]!=str[length-1-i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Yes\n");
    else
        printf("No\n");

    main();
    return 0;
}

