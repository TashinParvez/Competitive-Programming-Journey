
#include<stdio.h>
int main()
{
    char str[30];
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("Length is %d\n",i);


    main();
    return 0;
}

