//string03

#include<stdio.h>
int main()
{
    char str[30];
    gets(str);

    int i=0,vowels=0;
    while(str[i]!='\0')
    {
        if( str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='a'-32 ||str[i]=='e'-32||str[i]=='i'-32||str[i]=='o'-32||str[i]=='u'-32)
            vowels++;
        i++;
    }
    printf("total Vowels %d\n",vowels);


    main();
    return 0;
}


