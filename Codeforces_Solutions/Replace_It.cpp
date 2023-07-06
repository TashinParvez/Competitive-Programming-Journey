//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <iostream>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define CRACKED return 0;
#define nl endl; // NewLine

#define int long long
#define output(x) cout << x << nl // out
#define printarray(arr, len)      \
    for (int i = 0; i < len; i++) \
    {                             \
        cout << arr[i] << " ";    \
        if (i + 1 == len)         \
            cout << endl;         \
    } // array print
using namespace std;
#define len(s) s.length()

int32_t main()
{

    //    string s = "UI1234567U";
    //    output(s);
    //    s.erase(2,7);
    //    output(s);

    //    string str = "CPISMUSTFORACSESTUDENT";
    //    output(str.find("CSE"));  // output the first index of the finding string
    //    output(str.find("S"));  // output the first index of the finding string

    //    s.insert(2,"Name"); // in which index you want to push and what to enter

    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s, s2;
        cin >> s >> s2;
        int input = len(s2);
        for (int i = 0; i < len(s); i++)
        {
            if (s[i] == s2[0] && ((s.substr(i, input)) == s2))
            // if (s[i] == s2[0])
            {
                // cout << s.substr(i, input);
                // cout << nl;
                s = s.substr(0, i) + "$" + s.substr(i + input, s.length());
            }
        }
        cout << s << nl;
        // cout << nl;
    }

    CRACKED;
}
