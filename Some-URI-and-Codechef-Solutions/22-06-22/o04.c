#include<stdio.h>
int main()
{

int a;
scanf("%d",&a);

int p=a++;
--a;
int q=++a;
--a;
int r =a--;
++a;
int s=--a;


printf("X++ : %d\n++X : %d\nX- - : %d\n--X : %d",p,q,r,s);


// a++,++a,a--,--a

    return 0;
}
