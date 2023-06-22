//string04


#include<stdio.h>
int main()
{
    char str[30];
    gets(str);


    int i=0,words=0;

    while( str[i]!='\0' )
    {
        //printf("First loop running \n");

        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            while(str[i]!=' ')
            {
                i++;
                //   printf("second loop running \n");

            }
            words=words+1;
        }

        i++;
    }


    printf("\n Total words %d \n",words);

    main();
    return 0;
}


