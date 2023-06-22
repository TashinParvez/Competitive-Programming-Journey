#include<stdio.h>
int main()
{
    float s=0;
    int j=2;
    for(float i=1; i<=39; i=i+2)
    {
        if(i==1)
            s=s+1;
        else
        {
            s=s+(float)(i/(j));
            j=j*2;
        }
    }
    printf("%f\n",s);
    return 0;
}
