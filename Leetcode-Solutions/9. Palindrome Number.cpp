
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        *************       Created: 19.05.2025       *************

#include   <bits/stdc++.h>
#define    CRACKED        return 0;
#define    nl             endl
#define    int            long long
#define    setDec(x)      fixed << setprecision(x) 
#define    tashin         cout << "____Tashin____" << nl;
#define    dbg(x)         cerr << #x << " = " << (x) << endl;
using      namespace      std;

template <typename T> int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

// here tashin

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        for (int i = 0; i < s.size() / 2; i++){
            if(s[i] != s[s.size()- 1 - i])
                return 0;
        }
        return 1;
    }
};



int32_t main()
{   
     Solution sol;

    // Sample input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the function
    vector<int> result = sol.function_name(nums, target);

    // Print the result
    if (!result.empty())
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    else
        cout << "No solution found." << endl; 
    
    CRACKED;
}
