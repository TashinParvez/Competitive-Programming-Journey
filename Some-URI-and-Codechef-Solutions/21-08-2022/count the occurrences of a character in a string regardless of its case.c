#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);

    char c,cc;
    printf("Enter a char : ");
    scanf(" %c",&c);

    if(c>='a' && c<='z')
        cc=c-('a'-'A');
    else
    {
        cc=c+('a'-'A');
    }

    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==cc || str[i]==c)
        {
            count++;
        }
    }

    printf("Founds = %d\n",count);

    main();
    return 0;
}
