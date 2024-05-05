

//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    27/10/23     ****************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl // NewLine

#define int long long
#define null NULL
#define sp " " // space
#define setDec(x) fixed << setprecision(x)
#define len(s) s.length()
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "Tashin   " << endl;                       // debug code

using namespace std;

void solution() // main solution
{
    int a, b, c, d;
    int i, j, k, m, n, q;
    int x, y, z;

    int sum = 0, cnt = 0;

    cin >> n >> m;

    vector<int> bat(n);
    vector<int> ball(m);

    for (int i = 0; i < n; i++)
        cin >> bat[i];

    for (int i = 0; i < m; i++)
        cin >> ball[i];

    if (n < 4 || m < 4 || m + n < 11)
    {
        cout << -1 << nl;
        return;
    }

    sort(bat.begin(), bat.end(), greater<>());
    sort(ball.begin(), ball.end(), greater<>());

    sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += bat[i];
        sum += ball[i];
    }

    j = 4;
    k = 4;

    for (int i = 0; i < 3; i++)
    {
        if (j < n && k < m)
        {
            if (bat[j] > ball[k])
            {
                sum += bat[j];
                j++;
            }
            else
            {
                sum += ball[k];
                k++;
            }
        }
        else if (j < n)
        {
            sum += bat[j];
            j++;
        }
        else
        {
            sum += ball[k];
            k++;
        }
    }

    cout << sum << nl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    int c = 1;

    while (t--)
    {
        solution();
    }
    CRACKED;
}
