
//        ****************  Author :  Tashin.Parvez  *************************\
//        ****************  Updated:    21-06-23     *************************\

#include <bits/stdc++.h>
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define Read(x) freopen(x, "r", stdin)
#define Write(x) freopen(x, "w", stdout)
#define CRACKED return 0;
#define nl "\n"

// data_type_compressions :
#define int long long
#define ull unsigned long long
#define ld long double

#define PI 3.14159265358979323846

// I/O :
#define loop(n) for (int i = 0; i < n; i++) // 0 to n Input or Output
#define output(x) cout << x << nl           // out
#define printarray(arr, len)      \
    for (int i = 0; i < len; i++) \
    {                             \
        cout << arr[i] << " ";    \
        if (i + 1 == len)         \
            cout << endl;         \
    } // array print

#define sq(x) ((x) * (x)) // x^2  square
#define len(s) s.length()
#define setDec(x) fixed << setprecision(x)

#define YES printf("YES\n")
#define Yes printf("Yes\n")
#define NO printf("NO\n")
#define No printf("No\n")

using namespace std;

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, count = 0, index;
    string s;
    bool flag = false;

    cin >> n >> t >> k >> d;
    //  cakes needed,
    //  time needed for one ,
    //  cakes baked in onetime,
    //  second oven

    if (n <= k)
    {
        output("NO");
        return;
    }

    int forAll = 0;
    double totalUse = (n * 1.0 / k);
    if (totalUse - (int)totalUse != 0)
        totalUse++;

    int forOne = (t * (int)totalUse);
    int pp = (n + k - 1) / k * t;

    // cout << "pp  " << pp << nl;

    if (t == d && totalUse > k*2)
    {
        // cout << "tashin here is the worng " << nl;
        output("YES");
        return;
    }
    else if (t == d && totalUse == 2)
    {
        output("NO");
        return;
    }

    //  time needed for one , t
    //  second oven , d

    int o1 = 0;
    int o2 = d;
    forAll = 0; // present

    // cout<<"Came to 2nd use"<<nl;
    for (int i = 1; i <= totalUse; i++)
    {
        if (o1 < o2)
        {
            o1 += t;
            forAll += (o1 - forAll);
        }
        else if (o1 > o2)
        {
            o1 += t;
            forAll += (o1 - forAll);
            flag = true;
        }
        else
        {
            // cout << " Same Found " << nl;
            int useLeft = totalUse - i + 1;
            if (useLeft > 1)
                flag = true;
            if (useLeft % 2 == 0)
            {
                forAll += (useLeft / 2) * t;
            }
            else
            {
                forAll += ((useLeft / 2) + 1) * t;
            }
            break;
        }
    }

    // cout << "forOne " << forOne << " ";
    // cout << "forAll " << forAll << nl;

    // if (forOne <= forAll)
    if (forOne < forAll)
    {
        // cout << "forOne " << forOne << " ";
        // cout << "forAll " << forAll << nl;

        output("NO");
        return;
    }
    else
    {

        if (flag)
            output("YES");
        else
            output("NO");
        return;
    }
}

int32_t main()
{
    faster;
    int c = 1;
    {
        solution();
    }

    CRACKED;
}
