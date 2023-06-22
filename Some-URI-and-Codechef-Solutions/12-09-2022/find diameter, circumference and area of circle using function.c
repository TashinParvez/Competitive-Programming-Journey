#include<stdio.h>
float pi = 3.1416;
int  diameter(int n){
    return 2*n;
}
float circumference(int n)
{
    return 2*pi*n;
}
float area(int n)
{
    return n*n*pi;
}
int main()
{
    printf("%s","Enter radius ");
    int n;
    scanf("%d",&n);

    printf("Diameter %d\n", diameter(n));
    printf("Circumference  %.2f\n", circumference(n));
    printf("ARea %.2f\n",area(n));

    main();
    return 0;
}

