#include<stdio.h>
typedef struct n
{
    char birthday[10];

} birth;

int main()
{
    birth tas;

    // tas.birthday='2';
    tas.birthday="02-01-2002";

    strrev(tas.birthday);
    char str[4];

    for(int i=0; i<4; i++)
    {
        str[i]=tas.birthday[1];
    }
    strrev(tas.birthday);
    strrev(str);

    printf("%s",str);
    return 0;
}
