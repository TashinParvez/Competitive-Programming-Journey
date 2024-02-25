
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

//
//
//
//
/***************************************************************************************************/
//                      _    _           __       _ _      ______                                  //
//                     | |  | |         / _|     | | |    |  ____|                                 //
//                     | |  | |___  ___| |_ _   _| | |    | |__ _   _ _ __   ___                   //
//                     | |  | / __|/ _ \  _| | | | | |    |  __| | | | '_ \ / __|                  //
//                     | |__| \__ \  __/ | | |_| | | |    | |  | |_| | | | | (__                   //
//                      \____/|___/\___|_|  \__,_|_|_|    |_|   \__,_|_| |_|\___|                  //
//                                                                                                 //
/***************************************************************************************************/
//
//
//
//

int getASCII(char c) //---------------------(get ASCII of a Char)---------------->> 
{
    int a = c;
    return a;
}

bool isEven(int n) //---------------------(Even Check)---------------->>   Odd = 0   &&   Even = 1
{
    if (!(n & 1)) // Formula:  EVEN  (for even --->> i&1 == 0)
        return 1;
    else
        return 0;
}

int sod(int n) ///------------------------------(Sum of digits)---------------->> Return number's char sum  [12 -> 3]
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

pair<string, string> numtobit(int n) ///-----------------------(Num to Bit)-------------->> Return pair (bit_String + flip_String)
{
    string str = "";
    string flipstr = "";

    while (n)
    {
        int m = n % 2;
        n = n >> 1;

        string temp = to_string(m);

        if (temp == "1")
            flipstr = '0' + flipstr;
        else
            flipstr = '1' + flipstr;

        str = temp + str;
    }

    if (str.empty())
        str = "0";

    while (str.length() < 30)
    {
        str = '0' + str;
        flipstr = '1' + flipstr;
    }

    return {str, flipstr};
}

string flipBit(string binaryString) ///----------------------------------(Flip a Binary string Bits)------------>>  Returnflip String
{
    int length = binaryString.length();
    string flipString = "";

    for (int i = 0; i < length; i++)
        binaryString[i] == '0' ? flipString = flipString + '1' : flipString = flipString + '0';

    return flipString;
}











/// ---------------------------------------------------------------------------------------
/// -------------------------------------OTHERS--------------------------------------------------
/// ---------------------------------------------------------------------------------------
/// ---------------------------------------------------------------------------------------


#define MAX_SIZE 10000007
vector<int> isprime(MAX_SIZE, true);
vector<int> prime;
vector<int> SPF(MAX_SIZE);

void sieve(int N)
{
    // complexity  O(N)
    isprime[0] = isprime[1] = false;
 
    for (int i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (int j = 0; j < (int)prime.size() && i * prime[j] < N && prime[j] <= SPF[i]; j++)
        {
            isprime[i * prime[j]] = false;
            SPF[i * prime[j]] = prime[j];
        }
    }
}
//-----------------------Prime Factors of a Number------------------//
// vector<int> getFactorization(int x){
//     vector<int> ret;
//     while (x !=  1 && x < SPF.size()) {
//         ret.push_back(SPF[x]);
//         x = x / SPF[x];
//     }
//     return ret;
// }
//------------------------Coprime-------------------------//
bool is_coprime(int a, int b)
{
    return (__gcd(a, b) == 1);
}
// -----------------------Number of Divisors--------------------- //
int Number_of_Divisors(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cnt++;
            continue;
        }
        cnt += 2;
    }
    return cnt;
}
//------------------------Sum of All numbers----------------------//
int sum_of_all(int n)
{
    return (n * (n + 1)) / 2;
}
//------------------------Number of Digits-----------------------//
int number_of_digits(int n)
{
    return floor(log10(n))+1;
}