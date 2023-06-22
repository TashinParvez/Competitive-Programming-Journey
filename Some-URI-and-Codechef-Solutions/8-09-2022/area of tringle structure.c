#include<stdio.h>


// structure

typedef  struct tringleInfo
{
    int id;
    float base;
    float height;
    float area;
} tringle;

// functon


void taketraingleinfo(int i, tringle trivuj[])
{
    printf("tringle id:");
    scanf("%d",&trivuj[i].id);

    printf("tringle Base:");
    scanf("%f",&trivuj[i].base);

    printf("tringle Height:");
    scanf("%f",&trivuj[i].height);

    // entering area
    trivuj[i].area=((trivuj[i].base)*(trivuj[i].height))/2;

}

void  triangleArea(int i, tringle trivuj[])
{
    printf("area of %d triangle %f\n",i+1,trivuj[i].area);
}


// main function

int main()
{
    int n=3;

    tringle trivuj[n];

    // taking inputs

    for(int i=0; i<n; i++)
    {
        taketraingleinfo(i,trivuj);
    }


    // printing

    for(int i=0; i<n; i++)
    {
       triangleArea(i,trivuj);
    }


    return 0;
}
