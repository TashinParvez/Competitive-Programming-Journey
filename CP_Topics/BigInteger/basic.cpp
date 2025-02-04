//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    22-06-23     *************************\

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl; // NewLine
#define int long long
using namespace std;

string addTwoBigInteger(string str1, string str2) // a + b
{

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    string ans;
    int looplen = min(str1.length(), str2.length());
    int carry = 0;

    for (int i = 0; i < looplen; i++)
    {
        int numa = str1[i] - '0';
        int numb = str2[i] - '0';
        numa += numb + carry;
        ans += to_string(numa % 10);
        carry = numa / 10;
    }
    if (str1.length() > str2.length())
    {
        for (int i = looplen; i < str1.length(); i++)
        {
            int numa = str1[i] - '0';
            numa += carry;
            ans += to_string(numa % 10);
            carry = numa / 10;
        }
    }
    else
    {
        for (int i = looplen; i < str2.length(); i++)
        {
            int numa = str2[i] - '0';
            numa += carry;
            ans += to_string(numa % 10);
            carry = numa / 10;
        }
    }

    while (carry)
    {
        ans += to_string(carry % 10);
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int32_t main()
{

    // string a;
    // int b;
    // cin >> a >> b; // string and int

    // int val = 0;
    // for (int i = 0; i < a.length(); i++)
    // {
    //     val *= 10;
    //     val += a[i] - '0';
    //     if (i == 0 && val / b == 0)
    //     {
    //         continue;
    //     }
    //     cout << val / b;
    //     val %= b;
    // }

    // cout << nl;
    // cout << "Mod " << val << nl;

    // if (val == 0)
    // {
    //     cout << "a is divisable by b";
    // }
    // else
    // {
    //     cout << "a is not divisable by b";
    // }
    // cout << nl;



    /******************************** BigInteger Summation **************************************/

    string str1, str2;
    cin >> str1 >> str2;

    cout << addTwoBigInteger(str1, str2) << nl;
    return 0;

    

    CRACKED;
}
