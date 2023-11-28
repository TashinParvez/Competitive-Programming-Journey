//{ Driver Code Starts
// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Result
{
public:
    ll mn;
    ll mx;
};

Result minMax(ll arr[], ll s, ll e)
{
    if (s == e || e - s == 1)
    {
        Result r;
        r.mn = min(arr[s], arr[e]);
        r.mx = max(arr[s], arr[e]);

        return r;
    }
    else
    {
        int mid = s + (e - s) / 2;
        Result f1 = minMax(arr, s, mid);
        Result f2 = minMax(arr, mid + 1, e);

        Result r;
        r.mn = min(f1.mn, f2.mn);
        r.mx = max(f1.mx, f2.mx);
        return r;
    }
}

pair<long long, long long> getMinMax(long long a[], int n)
{
    Result result = minMax(a, 0, n - 1);
    return {result.mn, result.mx};
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

pair<long long, long long> getMinMax(long long a[], int n)
{
}