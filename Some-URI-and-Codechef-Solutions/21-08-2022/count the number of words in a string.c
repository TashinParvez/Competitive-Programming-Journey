#include<Stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i,words=0;
    for( i=0; str[i]!='\0' ; i++)
    {
        if(str[i]==' ')
            words++;
    }
    if(str[i-1]!=' ')
        words++;

    printf("Total Words %d\n",words);

    main();
    return 0;
}

