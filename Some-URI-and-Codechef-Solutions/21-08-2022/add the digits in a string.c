#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int sum=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        switch(str[i])
        {
        case '1':
            sum+=1;
            break;
        case '2':
            sum+=2;
            break;
        case '3':
            sum+=3;
            break;
        case '4':
            sum+=4;
            break;
        case '5':
            sum+=5;
            break;
        case '6':
            sum+=6;
            break;
        case '7':
            sum+=7;
            break;
        case '8':
            sum+=8;
            break;
        case '9':
            sum+=9;
            break;
        }
    }

    printf("Sum = %d\n",sum);

    main();
    return 0;
}

