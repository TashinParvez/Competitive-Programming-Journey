#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    int exp,mem;
    float inc;
    scanf("%d %d %f",&exp,&mem,&inc);
    if((exp>=12 && mem>5) || inc<1000.50)
    {
        if(c == 'x')
        {

            if(mem>8 && inc< 1100.78 ){
                printf("will get bouns\n");
            }
        }
        else if( c=='y' || c=='z'){
            if(mem>6)
            {
                printf("will get bouns\n");
            }
        }


    }
    return 0;
}

