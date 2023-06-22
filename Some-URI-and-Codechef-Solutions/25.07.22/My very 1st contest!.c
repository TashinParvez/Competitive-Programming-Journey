#include<stdio.h>
int main()
{

    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);

    /*
    n = number of user
    a = saw the problem ( No submission ) NR
    b = submit but not correct  / will not count
    */

    int rated, highRating;
    rated = n-a;            // total rated
    highRating=rated-b;

    printf("%d %d\n",rated, highRating);


    return 0;
}

