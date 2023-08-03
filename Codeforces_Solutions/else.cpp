//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define CRACKED return 0;
#define nl endl; // NewLine
#ifndef ONLINE_JUDGE
#define deb(x)           \
    cerr << #x << " = "; \
    print(x);            \
    cerr << endl;
#else
#define deb(x)
#endif
#define int long long
#define output(x) cout << x << nl // out
#define printarray(arr, len)      \
    for (int i = 0; i < len; i++) \
    {                             \
        cout << arr[i] << " ";    \
        if (i + 1 == len)         \
            cout << endl;         \
    } // array print
using namespace std;
#define sz length()

bool bal(string s)
{
    if (s.length() % 2 == 1)
        return false;
    int n = 0;
    for (int i = 0; i < s.sz; i++)
        if (s[i] == '?')
            n++;
    stack<int> st;
    int ct = 0;
    for (int i = 0; i < s.sz; i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == '?' and ct < n / 2)
        {
            st.push('?');
            ct++;
        }
        else if (s[i] == ')' or (s[i] == '?' and ct >= n / 2))
        {
            if (st.empty() == 1)
            {
                return false;
            }
            else
                st.pop();
        }
    }
    if (st.empty() == 1)
        return true;
    else
        return false;
}

void solve()
{

    string s;
    cin >> s;
    bool ans = bal(s);
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}

int32_t main()
{
    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}