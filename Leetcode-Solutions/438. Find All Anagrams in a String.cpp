
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl
#define int long long
#define setDec(x) fixed << setprecision(x)
#define tashin cout << "____Tashin____" << nl;
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl;
#define debt cout << "Tashin   " << endl;
using namespace std;
//--------------------------------------------------------------------------------------------------
vector<int> findAnagrams(string s, string p)
{
    int n = s.length();
    int k = p.length();

    vector<int> phash(26);
    vector<int> anagramHash(26);
    if (p > s)
        return {};

    for (size_t i = 0; i < k; i++)
    {
        phash[p[i] - 'a']++;
        anagramHash[s[i] - 'a']++;
    }
    vector<int> ans;

    if (phash == anagramHash)
        ans.push_back(0);

    for (size_t i = k; i < n; i++)
    {
        anagramHash[s[i] - 'a']++;
        anagramHash[s[i - k] - 'a']--;

        if (phash == anagramHash)
            ans.push_back(i - k + 1);
    }

    return ans;
}

int32_t main()
{

    string s = "aa", p = "aaaa";
    vector<int> a = findAnagrams(s, p);
    for (auto i : a)
    {
        cout << i << " ";
    }

    CRACKED;
}
