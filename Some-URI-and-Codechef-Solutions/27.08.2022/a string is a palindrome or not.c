#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);

    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }

    int j=1,flag=0;

    for(j=0; j<i-1/2; j++)
    {
        if(str[j]!=str[i-1-j])
            flag=1;
    }

    if(flag==1)
        printf("Not palindrome\n");
    else
        printf("Palindrome\n");


    main();
    return 0;
}

