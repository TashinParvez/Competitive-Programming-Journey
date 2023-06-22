#include<bits/stdc++.h>
using namespace std;

int countCircleLen(int n)
{
    int count =0;
    while(1)
    {
        count++;
        if(n == 1)
            break;
        else if(n%2==0)
            n=n/2;
        else
            n=(3*n)+1;
    }

    return count;
}

int main()
{
    int n, l;
    int countCircleLength=0;
    int maxLength=0;

    while(cin>>n>>l)
    {
        cout<<n<<" "<<l<<" ";
        countCircleLength=0;
        maxLength=0;

        if(n>l)
            swap(n,l);

        for(int i=n; i<=l; i++)
        {
            countCircleLength=countCircleLen(i);
            if(maxLength<countCircleLength)
                maxLength=countCircleLength;
        }

        cout<<maxLength<<endl;
    }

    // main();

    return 0;
}
