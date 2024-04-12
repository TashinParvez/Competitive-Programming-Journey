#include "bits/stdc++.h"
using ll = long long  ;
const ll mod = 1e9 + 7 ;
const ll OO = 1e18 + 5 ;
const ll N = 5e5 + 5   ;
using namespace std;
ll n ,  x , y , tt = 1 ;

int main()
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;


    cin >> tt ;
    while(tt--)
    {
        cin >> x >> y ;

        if(x - y > 1)
        {
            cout << "NO\n";
            continue;
        }

        ll tar = (x + y) ;


        bool ok = true ;
        for(ll i = 2 ; i * i <= tar ; ++i)
        {
            if(tar % i == 0)
            {
                ok = false ;
            }
        }

        if(ok)
        {
            cout << "YES\n";
        }else
        {
            cout << "NO\n";
        }



    }



}
