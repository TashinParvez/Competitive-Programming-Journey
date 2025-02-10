#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int oke(int n, int m, vector<int> &a, vector<int> &b)
{

    int aa = b[0];

    for (int i = 0; i < n; ++i)
    {

        int f = aa - a[i]; 

        if (i == 0)
        {
            a[i] = min(a[i], f);
        }
        else
        {

            if (a[i] >= a[i - 1] && f >= a[i - 1])
                a[i] = min(a[i], f);
            else if (a[i] >= a[i - 1])
                a[i] = a[i];
            else if (f >= a[i - 1])
                a[i] = f;
            else
                return 0;
        }
    }

    return 69;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];

        if (oke(n, m, a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
