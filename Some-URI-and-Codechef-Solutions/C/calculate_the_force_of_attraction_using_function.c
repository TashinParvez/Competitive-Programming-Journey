#include <stdio.h>
float force(float);
int main()
{
    float m ,f;
    printf("enter the value of m = ");
    scanf("%f", &m);
    printf("F=mg\nm=%f , g=9.8\nF=%f", m, force(m));
    return 0;
}
float force(float m)
{
    float f = m * 9.8;
    return f;
}