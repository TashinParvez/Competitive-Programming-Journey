//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************
//        ****************  Updated:    29/10/23     ****************

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"
#define newLine cout << nl;

// data_type_compressions :
#define int long long
#define ld long double
#define ll long long

#define minusone -1
#define PI 3.14159265358979323846

// I/O :
#define sp " "                    // space
#define si(n) cin >> n;           // input  [ si = scan input]
#define output(x) cout << x << nl // output

#define square(x) ((x) * (x)) // x^2  square

#define setDec(x) fixed << setprecision(x)

#define len(s) s.length()
#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower) // make string lowercase

#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;

#define min3(a, b, c) min(min(a, b), c)
#define mid3(a, b, c) (a + b + c) - max3(a, b, c) - min3(a, b, c)
#define max3(a, b, c) max(max(a, b), c)

#define SumInRange(a, b) ((b * (b + 1)) / 2) - (((a - 1) * (a)) / 2)

using namespace std;

int upperPart(int a, int b, int c) // (a to b) / c
{
    float sum = 1;
    int index = 1;               // 1 to c
    for (int i = b; i >= a; i--) // a to b
    {
        sum *= ((i * 1.0) / (index));
        index++;
    }
    return (int)sum;
}

int upperPart2(int a, int b, int c) // (a to b) / c
{
    float sum = 1;
    int index = 1;
    int ff = 1;                  // 1 to c
    for (int i = b; i >= a; i--) // a to b
    {
        sum *= i;
        ff *= index;
        index++;
    }

    return (int)sum / ff;
}

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

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, cnt = 0, index;
    string s;

    cin >> n;
    string sum = "0";

    for (int i = 2; i <= n; i++)
    {
        a = upperPart(i + 1, n, (n - i));
        string str2 = to_string(a);
        sum = addTwoBigInteger(sum, str2);
    }

    if (sum[0] == '0' && n != 1)
    {
        sum = sum.substr(1, sum.length() - 1);
        cout << sum << nl;
    }
    else
        cout << sum << nl;
}

int32_t main()
{

    solution();
    return 0;
}