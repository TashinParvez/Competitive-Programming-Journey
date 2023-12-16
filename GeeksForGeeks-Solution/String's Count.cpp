//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
    return 0;
}
// } Driver Code Ends

long long int NPR(long long int n, long long int r)
{
    long long int ans = 1;
    for (long long int i = 1; i <= n; i++)
    {
        long long int current = i;
        if (i <= r)
            continue;
        else
            ans *= current;
    }

    return ans;
}
long long int countStr(long long int n)
{

    long long int k = 1; /// 1
    long long int l = NPR(n, n - 1);
    k += 2 * l; /// 2 4

    long long int p = NPR(n, n - 2);
    if (n >= 2) /// 3
        k += p / 2;

    if (n >= 2) /// 5
        k += p;

    if (n >= 3) /// 6
        k += NPR(n, n - 3) / 2;

    return k;
}