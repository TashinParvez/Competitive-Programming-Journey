
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        *************       Created: 24.05.2025       *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl
#define int long long
#define setDec(x) fixed << setprecision(x)
#define tashin cout << "____Tashin____" << nl;
#define dbg(x) cerr << #x << " = " << (x) << endl;
using namespace std;

template <typename T>
int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

// here tashin
class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans = {};

        for (int itr = 0; itr < words.size(); itr++)
        {
            for (int i = 0; i < words[itr].size(); i++)
            {
                if (words[itr][i] == x)
                {
                    ans.push_back(itr);
                    break;
                }
            }
        }

        return ans;
    }
};

int32_t main()
{
    Solution sol;

    // Call the function
    vector<int> result = sol.findWordsContaining(*(new vector<string>{"leet", "code"}), 'e');

    // Print the result
    if (!result.empty())
    {
        for (int i = 0; i < result.size(); ++i)
        {
            cout << "Index " << i << ": " << result[i] << endl;
        }
    }

    else
        cout << "No solution found." << endl;

    //     cout << sol.Function_Name( *(new vector<int>{  2, 7, 11, 15   }),    9) << endl;

    CRACKED;
}
