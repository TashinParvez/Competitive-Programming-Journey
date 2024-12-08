#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;

    int n = s.size(), m = t.size();

    while (i < n)
    {
        if (s[i] == t[j] || s[i] == '?')
        {
            if (j == m)
            {
                s[i] = 'a';
            }
            else
            {
                s[i] = t[j];
                j++;
            }
        }
        i++;
    }

    if (j < m)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n"
         << s << '\n';
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
