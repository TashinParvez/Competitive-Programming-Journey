
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code

using namespace std;

bool isVowel(char a)
{
    if (a == 'b' || a == 'c' || a == 'd')
        return false;
    return true;
}

void solution()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    string ans = "";
    ans += s[0];
    ans += s[1];

    for (int i = 2; i < n;)
    {
        if (!isVowel(s[i]))
        {
            if (i + 2 < n)
                if (!isVowel(s[i + 1]))
                {
                    ans += s[i];
                    ans += '.';
                    ans += s[i + 1];
                    ans += s[i + 2];
                }
                else
                {
                    ans += '.';
                    ans += s[i];
                    ans += s[i + 1];
                }
            else
            {
                while (i < n)
                {
                    ans += s[i];
                    i++;
                    cout << "TASHIN" << endl;
                }
            }
            i += 2;
        }
        else
        {
            cout << "TASHIN" << endl;
        }
    }

    cout << ans << nl;
}

int32_t main()
{

    int t = 1;
    cin >> t;
    int c = 1;

    while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}