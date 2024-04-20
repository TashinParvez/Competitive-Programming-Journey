//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    18-08-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
using namespace std;
#define ll long long

ll str_to_int(string s)   // optimize
{
    istringstream ss(s);
    ll n;
    ss >> n;
    return n;
}

 //====================== String to Number ======================= string to int

    //    string num = "786";
    //    int n = stoi(num);
    //    output(n);

int32_t main()
{

    string s;
    cin >> s;
    int number = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (!(c >= '0' && c <= '9')) // incase any point found skip that
            continue;
        number *= 10;
        number += (c - '0');
    }

    cout << number << nl;

    CRACKED;
}
