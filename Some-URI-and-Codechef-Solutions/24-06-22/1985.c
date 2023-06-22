#include<stdio.h>
int main()
{

    int a,p;
    float t,total=0;
    scanf("%d",&a);

    for(int i=1; i<=a; i++)
    {
        scanf("%d%f",&p,&t);

        if(p==1001)
            total=total+(1.50*t);
        else if(p==1002)
            total=total+(2.50*t);
        else if(p==1003)
            total=total+(3.50*t);
        else if(p==1004)
            total=total+(4.50*t);
        else if(p==1005)
            total=total+(5.50*t);
    }


    printf("%.2f\n",total);
    return 0;
}

