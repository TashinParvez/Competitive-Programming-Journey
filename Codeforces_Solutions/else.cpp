#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define fs(n) fixed << setprecision(n)
#define asort(a) sort(a, a + n)
#define vi vector<int>
#define qi queue<int>
#define di deque<int>
#define pqi priority_queue<int>
#define pql priority_queue<long long>
#define dl deque<long long>
#define ql queue<long long>
#define s second
#define f first
#define vl vector<long long int>
#define vc vector<char>
#define po pop_back
#define allr(x) ((x).rbegin(), (x).rend())
#define all(x) (x).begin(), (x).end()
#define in(v)         \
    for (auto &b : v) \
        cin >> b;
#define dsort(a) sort(a, a + n, greater<int>())
#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define c(v) cout << v << endl;
#define cy cout << "YES" << end;
#define in(v)         \
    for (auto &b : v) \
        cin >> b;
#define cn cout << "NO" << endl;
#define mod 1000000007
#define mx 10000005
#define inf (int)1e9 + 7

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    tc
    {
        int n;
        cin >> n;
        string s = "";
        for (int i = 9; i > 0; i--)
        {
            if (n >= i)
            {
                s += i + '0';
                n -= i;
            }
        }

        sort(s.begin(), s.end());

        cout << s << endl;
    }
}
