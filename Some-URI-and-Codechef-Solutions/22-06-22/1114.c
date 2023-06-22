#include<stdio.h>
int main()
{
    int pass=2002,try;
    while(1)
    {
        scanf("%d",&try);
        if(try==pass)
            {
                printf("Acesso Permitido\n");
                break;
            }
        else
        {

            printf("Senha Invalida\n");
        }
    }

    return 0;
}

