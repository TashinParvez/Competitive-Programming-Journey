#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

const int N   = (int) 2e5 + 5;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 9;

#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()

int main() {
  // freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int test = 1, tc = 0; cin >> test;
  while (test--) {
    int n; cin >> n;
    vi v(n, 0);
    for (int& x : v) cin >> x;
    int ans = 0;
    int mn = INF;
    int lose = INF;
    for (int i = 0; i < n; ++i) {
      mn = min(mn, v[i]);
      if (v[i] > mn and v[i] < lose) {
        ans++;
        lose = v[i];
      }
    }
    cout << ans << nl;
  }
  return 0;
}