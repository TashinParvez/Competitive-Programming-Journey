#include <bits/stdc++.h>
using namespace std;

bool isConsonant(char c)
{
    if (c == 'b' || c == 'c' || c == 'd')
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans;
        ans += s[0];
        ans += s[1];

        int i = 2;
        while (i < n)
        {
            if (i + 1 < n)
            {
                if (isConsonant(s[i + 1]))
                {
                    ans += s[i]; 
                    ans += '.';
                    ans += s[i + 1];
                    ans += s[i + 2];
                    i += 3;
                }
                else
                { 
                    ans += '.';
                    ans += s[i];
                    ans += s[i + 1];
                    i += 2;
                }
            }
            else
            {
                ans += s[i];
                break;
            }
        }

        cout << ans << '\n';
    }
}