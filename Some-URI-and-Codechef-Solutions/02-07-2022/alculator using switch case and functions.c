#include<stdio.h>
int main()
{

    float a,b;
    char c;
    scanf("%f\n%c%f",&a,&c,&b);

    switch(c)
    {
    case '+':
        printf("%f+%f = %f\n",a,b,a+b);
        break;
    case '-':
        printf("%f-%f = %f\n",a,b,a-b);
        break;
    case '*':
        printf("%f*%f = %f\n",a,b,a*b);
        break;
    case '/':
        switch(b>0){
            case 1:
        printf("%f/%f = %f\n",a,b,a/b);
        break;
        case 0:
        printf("Undefined\n");
        break;
        }
        break;
    }


    return 0;
}
