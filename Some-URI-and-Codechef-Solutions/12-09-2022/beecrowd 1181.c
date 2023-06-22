#include<stdio.h>
int main()
{
    double N[12][12],sum = 0.0;
    int i, j, k, l, m, n;

    char x[2];
    scanf("%d %s", &k, &x);

    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &N[i][j]);
            if(i==k)
                sum += N[i][j];

        }
    }

    if(x[0] ==' S')
        printf("%.1lf\n", sum);
    else if(x[0] == 'M')
        printf("%.1lf\n", sum / 12.0);

    return 0;
}
