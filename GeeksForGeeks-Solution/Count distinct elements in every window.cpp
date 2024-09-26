
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

vector<int> countDistinct(int arr[], int n, int k)
{
    map<int, int> digitCnt;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        digitCnt[arr[i]]++;
    } 
    ans.push_back(digitCnt.size());
    int temp = digitCnt.size();

    for (int i = k; i < n; i++)
    {
        digitCnt[arr[i]]++;
        if (digitCnt[arr[i]] == 1)
            temp++;
        digitCnt[arr[i - k]]--;
        if (digitCnt[arr[i-k]] == 0)
            temp++;
        ans.push_back(temp);
    }

    return ans;
}

int32_t main()
{
    vector<int> v = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;



    CRACKED;
}
