
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
    queue<pair<int, int>> que;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            que.push({arr[i], i});
        }
    }
    if (que.empty())
        cout << 0 << " ";
    else
        cout << que.front().first << " ";

    // ok

    for (int i = k; i < n; i++)
    {
        if (arr[i] < 0)
        {
            que.push({arr[i], i});
        }
        if (que.front().second <= i - k)
            que.pop();

        if (que.empty())
            cout << 0 << " ";
        else
            cout << que.front().first << " ";
    }

    CRACKED;
}