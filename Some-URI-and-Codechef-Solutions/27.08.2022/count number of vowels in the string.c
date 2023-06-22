#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);

    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' || str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' )
            count++;
        i++;
    }

    printf("Total Vowels %d\n",count);


    main();
    return 0;
}

