
//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    21-06-23     *************************\

#include <bits/stdc++.h>
#define faster                          \
      ios_base::sync_with_stdio(false); \
      cin.tie(0);                       \
      cout.tie(0);
#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"

// data_type_compressions :
#define int long long
#define ull unsigned long long
#define ld long double

#define PI 3.14159265358979323846

// I/O :
#define loop(n) for (int i = 0; i < n; i++) // 0 to n Input or Output
#define output(x) cout << x << nl           // out
#define printarray(arr, len)        \
      for (int i = 0; i < len; i++) \
      {                             \
            cout << arr[i] << " ";  \
            if (i + 1 == len)       \
                  cout << endl;     \
      } // array print

#define sq(x) ((x) * (x)) // x^2  square
#define len(s) s.length()
#define setDec(x) fixed << setprecision(x)

#define YES printf("YES\n")
#define Yes printf("Yes\n")
#define NO printf("NO\n")
#define No printf("No\n")

using namespace std;

/*
    int n; cin>>n;
    int arr[n];
    for(auto &v : arr) cin>>v;


    if(!(i&1))   //-------------- EVEN  (for even --->> i&1 == 0)
        cout<<i<<nl;

*/

void solution()
{
      int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
      string s;
      bool flag = false;
      char arr[4][4];
      for (int i = 1; i < 4; i++)
      {
            for (int j = 1; j < 4; j++)
            {
                  cin >> arr[i][j];
            }
      }
      string ans = "DRAW";
      if (arr[1][1] != '.')
      {

            if (arr[1][1] == arr[1][2] && arr[1][1] == arr[1][3])
            {
                  ans = arr[1][1];
            }

            if (arr[2][1] == arr[1][1] && arr[1][1] == arr[3][1])
            {
                  ans = arr[1][1];
            }

            if (arr[1][1] == arr[2][2] && arr[1][1] == arr[3][3])
            {
                  ans = arr[1][1];
            }
      }

      if (arr[1][2] != '.' && arr[1][2] == arr[2][2] && arr[1][2] == arr[3][2])
      {
            ans = arr[1][2];
      }

      if (arr[1][3] != '.' && arr[1][3] == arr[2][3] && arr[1][3] == arr[3][3])
      {
            ans = arr[1][3];
      }

      if (arr[1][3] != '.' && arr[1][3] == arr[2][2] && arr[1][3] == arr[3][1])
      {
            ans = arr[1][3];
      }

      if (arr[2][1] != '.' && arr[2][1] == arr[2][2] && arr[2][1] == arr[2][3])
      {
            ans = arr[2][1];
      }

      if (arr[3][1] != '.' && arr[3][1] == arr[3][2] && arr[3][1] == arr[3][3])
      {
            ans = arr[3][1];
      }
      cout << ans << nl;
}

int32_t main()
{
      faster;

      // #ifdef TashinParvez
      //     Read("input.txt");
      //   //  Write("output.txt");
      // #endif // TashinParvez

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
