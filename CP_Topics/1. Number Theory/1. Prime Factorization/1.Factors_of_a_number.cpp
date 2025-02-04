
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include   <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl
#define    int            long long
#define    setDec(x)      fixed << setprecision(x) 
#define    tashin         cout << "____Tashin____" << nl;
#define    deb(n)         cout << "Tashin   " << #n << " = " << n << endl;
#define    debug(x) cerr << #x << " = " << (x) << endl;
#define    debt           cout << "Tashin   " << endl;
  using    namespace      std;

template <typename T> int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

void printFactors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        cout << i << " ";
        if (n / i != i)
          cout << n / i << " ";
      }
    }
    cout << nl;
}

int32_t main()
{
  int n;

  cin >> n;
  printFactors(n);

  CRACKED;
}
