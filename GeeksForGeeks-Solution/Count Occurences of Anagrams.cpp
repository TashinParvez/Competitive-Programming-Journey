
 
// --------------------------------


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int search(string pat, string text)
    {
        int n = text.length();
        int k = pat.length();

        vector<int> phash(26);
        vector<int> anagramHash(26);

        for (size_t i = 0; i < k; i++)
        {
            phash[pat[i] - 'a']++;
            anagramHash[text[i] - 'a']++;
        }
        int ans = 0;

        if (phash == anagramHash)
            ans++;

        for (size_t i = k; i < n; i++)
        {
            anagramHash[text[i] - 'a']++;
            anagramHash[text[i - k] - 'a']--;

            if (phash == anagramHash)
                ans++;
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends