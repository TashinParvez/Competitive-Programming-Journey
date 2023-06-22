#include<Stdio.h>
int main()
{
    char str[100];
    gets(str);
    int len=0;
    for(int i=0; str[i]!='\0' ; i++)
    {
        len+=1;
    }
    printf("Length = %d\n",len);


    for(len=len-1; len>=0 ; len--)
    {
        printf("%c",str[len]);
    }

    printf("\n");
    main();
    return 0;
}
