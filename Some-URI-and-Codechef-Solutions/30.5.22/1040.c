#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf%lf%lf",&a,&b,&c,&d);
    double avg=(a*2+b*3+c*4+d)/10.00;
    printf("Media: %.1lf\n",avg);

if(avg>=7){
    printf("Aluno reprovado.\n");
}
else if(avg<5){
    printf("Aluno reprovado.\n");
}
else if(avg>=5&&avg<=6.9)
    printf("Aluno em exame.\n");

    return 0;
}
