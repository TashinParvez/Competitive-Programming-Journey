#include <bits/stdc++.h>
using namespace std;
//------------------------------------------   --------------------------------

#define max3(a,b,c)    max(max(a, b),c)

//------------------------------------------ FOR --------------------------------

#define FORN(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)(n)-1; i >= 0; i--)

//------------------------------------------ template --------------------------------
#define pii pair<int, int>
#define pll pair<ll, ll>

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cout << '{';
    __print(x.first);
    cout << ',';
    __print(x.second);
    cout << '}';
}

template <typename T>
void __print(const T &x)
{
    int f = 0;
    cout << '{';
    for (auto &i : x)
        cout << (f++ ? "," : ""), __print(i);
    cout << "}";
}
void _print() { cout << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cout << ", ";
    _print(v...);
}