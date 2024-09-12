
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include   <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl
#define    int            long long
#define    setDec(x)      fixed << setprecision(x) 
#define    tashin         cout << "____Tashin____" << nl;
#define    deb(n)         cout << "Tashin   " << #n << " = " << n << endl;
#define    debt           cout << "Tashin   " << endl;
  using    namespace      std;

template <typename T> int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

int32_t main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxi = max(maxi, sum);
 
    for (int i = k; i < n; i++) 
    {
        sum -= arr[i - k];
        sum += arr[i];
        maxi = max(maxi, sum);
    }

    cout << "Max " << maxi << nl;

    CRACKED;
}
