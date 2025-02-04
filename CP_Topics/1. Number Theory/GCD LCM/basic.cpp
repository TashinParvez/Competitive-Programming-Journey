#include <bits/stdc++.h>
using namespace std;

int lcm(int a , int b){
    return a * b / gcd(a, b);
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a = 60, b = 45;

    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;

    return 0;
}