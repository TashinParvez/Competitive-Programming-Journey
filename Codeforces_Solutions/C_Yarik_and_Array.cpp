
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
#define ull unsigned long long
#define ld long double

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

//--------------------------------- Debug --------------------------------
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl; // debug code
#define debt cout << "   Tashin   " << endl;

//--------------------------------- FOR --------------------------------
#define FOR0(i, n) for (int i = 0; i < (int)(n); i++)  //___ 0 to < N
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++) //___ 1 to <= N

#define FOR2(a, n) for (int i = a; i < n; i++) //___ A to < N

//-------------------------------- Vector -------------------------------
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define vii vector<pair<int, int>>
#define vsi vector<pair<string, int>>

#define pb push_back
#define pop pop_back

#define vsort(v) sort(v.begin(), v.end())                    // Vector asc
#define vSortRev(v) sort(v.begin(), v.end(), greater<int>()) // Vector dec

#define arrSort(a) sort(a, a + n)                    // array asc
#define arrSortRev(a) sort(a, a + n, greater<int>()) // array dec

//-------------------------------- pair -------------------------------

typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;

#define mp make_pair
#define ff first
#define ss second

//-------------------------------- Map -------------------------------
#define mapii map<int, int>
#define mapsi map<string, int>
#define mapci map<char, int>

/******************************* Some Func ********************************************/
int getASCII(char c)
{
    return c;
}

bool evenOdd(int n) //  Odd = 0   &&   Even = 1
{
    if (!(n & 1)) // Formula:  EVEN  (for even --->> i&1 == 0)
        return 1;
    else
        return 0;
}

void printarray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        (i + 1 == len) ? cout << arr[i] << nl : cout << arr[i] << " ";
}

/********************************* Get used to *************************************************/
/*
Use      matrix   =    while 2D array
*/

class Result
{
public:
    int maxSum;
    int leftindex;
    int rightIndex;
};

Result crossingSum(vi arr, int left, int mid, int right)
{
    bool flag = false; // odd;
    int cnt = 0;

    Result result;

    int sum = 0;
    int lSum = INT_MIN;
    int index = mid;
    if (arr[index] % 2 == 0)
    {
        flag = true; // even
        cnt = 1;
    }

    // first
    sum += arr[index];
    if (sum > lSum)
    {
        lSum = sum;
    }
    index--;

    while (index >= left)
    {
        if ((cnt == 0 && arr[index] % 2 == 0) || (cnt == 1 && arr[index] % 2 != 0))
        {
            sum += arr[index];
            if (sum > lSum)
            {
                lSum = sum;
            }
            index--;
            if (cnt == 0)
                cnt = 1;
            else
            {
                cnt = 0;
            }
        }
        else
            break;
    }
    //-----------------------------------------------------------------

    // checking right side

    sum = 0;
    int rSum = INT_MIN;
    index = mid + 1;

    flag = false;
    cnt = 0;

    if (arr[index] % 2 == 0)
    {
        flag = true; // even
        cnt = 1;
    }

    sum += arr[index];
    if (sum > rSum)
    {
        rSum = sum;
    }
    index++;

    while (index <= right)
    {
        if ((cnt == 0 && arr[index] % 2 == 0) || (cnt == 1 && arr[index] % 2 != 0))
        {
            sum += arr[index];
            if (sum > rSum)
            {
                rSum = sum;
            }
            index++;
            if (cnt == 0)
                cnt = 1;
            else
            {
                cnt = 0;
            }
        }
        else
            break;
    }

    if ((arr[mid] % 2 == 0 && arr[mid + 1] % 2 != 0) || (arr[mid] % 2 != 0 && arr[mid + 1] % 2 == 0))
        result.maxSum = lSum + rSum;
    else
    {
        result.maxSum = max(lSum, rSum);
    }

    return result;
}

Result maximumSubArray(vi arr, int left, int right)
{
    if (left == right)
    {
        Result result;
        result.maxSum = arr[left];
        result.leftindex = result.rightIndex = left;

        return result;
    }
    else
    {
        int mid = left + ((right - left) / 2);

        Result leftSum = maximumSubArray(arr, left, mid);
        Result rightSum = maximumSubArray(arr, mid + 1, right);

        Result crossSum = crossingSum(arr, left, mid, right);

        if (max({leftSum.maxSum, rightSum.maxSum, crossSum.maxSum}) == leftSum.maxSum)
            return leftSum;
        else if (max({leftSum.maxSum, rightSum.maxSum, crossSum.maxSum}) == rightSum.maxSum)
            return rightSum;
        else
            return crossSum;
    }
}

void solution()
{
    int i, j, k, l, m, n, a, b, c, d, w, x, y, z, t, cnt = 0, index;
    string s;
    bool flag = false;

    cin >> n;
    vi arr(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Result result = maximumSubArray(arr, 0, n - 1);
    cout << result.maxSum << nl;
}

int32_t main()
{
    faster;

    int t = 1;
    cin >> t;
    int c = 1;

    while (t--)
    {
        // cout << "Case " << c++ << ": ";
        solution();
    }

    CRACKED;
}
