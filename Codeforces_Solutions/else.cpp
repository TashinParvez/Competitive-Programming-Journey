#include <iostream>
#include <iterator>
#include <algorithm>
#include <limits>
using namespace std;
#define ull unsigned long long
#define ll long long
#define nl '\n'
#define deb(n) cout << #n << " = " << (n) << nl
#define rep(i, start, end) for (int i = (start); i < (end); i++)
#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a < b ? a : b
#define skipline() cin.ignore(numeric_limits<streamsize>::max(), nl)
#define UwU ios_base::sync_with_stdio(0);cin.tie(0)
#define T_T int t; cin >> t; for (; t; t--)

int main() { UwU;
    T_T {
        int n, k; cin >> n >> k;
        bool sorted = true;
        ll a; cin >> a;
        ll b;
        rep(i, 1, n) {
            cin >> b;
            if (b < a) {
                skipline();
                sorted = false;
                break;
            }
            a = b;
        }
        if (sorted) {
            cout << "yes" << nl;
            continue;
        }
        if (k < 2)
            cout << "no" << nl;
        else
            cout << "yes" << nl;
    }
}
