#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);

    int res = cmp(str1,str2);  // call a function

    if(res == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.\n");
    }
    else
    {
        printf("First string is lexicographically greater than second.\n");
    }


    main();
    return 0;
}


// another function

int cmp(char str1[],char str2[])
{

    int i=0;
    while(str1[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            break;
        }
        i++;
    }

    return str1[i]-str2[i];
}




// another way using pre build Functions
//  res = strcmp(str1, str2);


